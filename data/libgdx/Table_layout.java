/**
 * Positions and sizes children of the table using the cell associated with each child. The values given are the position
 * within the parent and size of the table.
 */
private void layout(float layoutX, float layoutY, float layoutWidth, float layoutHeight) {
    Array<Cell> cells = this.cells;
    int cellCount = cells.size;
    if (sizeInvalid)
        computeSize();
    float padLeft = this.padLeft.get(this);
    float hpadding = padLeft + padRight.get(this);
    float padTop = this.padTop.get(this);
    float vpadding = padTop + padBottom.get(this);
    int columns = this.columns, rows = this.rows;
    float[] expandWidth = this.expandWidth, expandHeight = this.expandHeight;
    float[] columnWidth = this.columnWidth, rowHeight = this.rowHeight;
    float totalExpandWidth = 0, totalExpandHeight = 0;
    for (int i = 0; i < columns; i++) totalExpandWidth += expandWidth[i];
    for (int i = 0; i < rows; i++) totalExpandHeight += expandHeight[i];
    // Size columns and rows between min and pref size using (preferred - min) size to weight distribution of extra space.
    float[] columnWeightedWidth;
    float totalGrowWidth = tablePrefWidth - tableMinWidth;
    if (totalGrowWidth == 0)
        columnWeightedWidth = columnMinWidth;
    else {
        float extraWidth = Math.min(totalGrowWidth, Math.max(0, layoutWidth - tableMinWidth));
        columnWeightedWidth = Table.columnWeightedWidth = ensureSize(Table.columnWeightedWidth, columns);
        float[] columnMinWidth = this.columnMinWidth, columnPrefWidth = this.columnPrefWidth;
        for (int i = 0; i < columns; i++) {
            float growWidth = columnPrefWidth[i] - columnMinWidth[i];
            float growRatio = growWidth / totalGrowWidth;
            columnWeightedWidth[i] = columnMinWidth[i] + extraWidth * growRatio;
        }
    }
    float[] rowWeightedHeight;
    float totalGrowHeight = tablePrefHeight - tableMinHeight;
    if (totalGrowHeight == 0)
        rowWeightedHeight = rowMinHeight;
    else {
        rowWeightedHeight = Table.rowWeightedHeight = ensureSize(Table.rowWeightedHeight, rows);
        float extraHeight = Math.min(totalGrowHeight, Math.max(0, layoutHeight - tableMinHeight));
        float[] rowMinHeight = this.rowMinHeight, rowPrefHeight = this.rowPrefHeight;
        for (int i = 0; i < rows; i++) {
            float growHeight = rowPrefHeight[i] - rowMinHeight[i];
            float growRatio = growHeight / totalGrowHeight;
            rowWeightedHeight[i] = rowMinHeight[i] + extraHeight * growRatio;
        }
    }
    // Determine actor and cell sizes (before expand or fill).
    for (int i = 0; i < cellCount; i++) {
        Cell c = cells.get(i);
        int column = c.column, row = c.row;
        Actor a = c.actor;
        float spannedWeightedWidth = 0;
        int colspan = c.colspan;
        for (int ii = column, nn = ii + colspan; ii < nn; ii++) spannedWeightedWidth += columnWeightedWidth[ii];
        float weightedHeight = rowWeightedHeight[row];
        float prefWidth = c.prefWidth.get(a);
        float prefHeight = c.prefHeight.get(a);
        float minWidth = c.minWidth.get(a);
        float minHeight = c.minHeight.get(a);
        float maxWidth = c.maxWidth.get(a);
        float maxHeight = c.maxHeight.get(a);
        if (prefWidth < minWidth)
            prefWidth = minWidth;
        if (prefHeight < minHeight)
            prefHeight = minHeight;
        if (maxWidth > 0 && prefWidth > maxWidth)
            prefWidth = maxWidth;
        if (maxHeight > 0 && prefHeight > maxHeight)
            prefHeight = maxHeight;
        c.actorWidth = Math.min(spannedWeightedWidth - c.computedPadLeft - c.computedPadRight, prefWidth);
        c.actorHeight = Math.min(weightedHeight - c.computedPadTop - c.computedPadBottom, prefHeight);
        if (colspan == 1)
            columnWidth[column] = Math.max(columnWidth[column], spannedWeightedWidth);
        rowHeight[row] = Math.max(rowHeight[row], weightedHeight);
    }
    // Distribute remaining space to any expanding columns/rows.
    if (totalExpandWidth > 0) {
        float extra = layoutWidth - hpadding;
        for (int i = 0; i < columns; i++) extra -= columnWidth[i];
        float used = 0;
        int lastIndex = 0;
        for (int i = 0; i < columns; i++) {
            if (expandWidth[i] == 0)
                continue;
            float amount = extra * expandWidth[i] / totalExpandWidth;
            columnWidth[i] += amount;
            used += amount;
            lastIndex = i;
        }
        columnWidth[lastIndex] += extra - used;
    }
    if (totalExpandHeight > 0) {
        float extra = layoutHeight - vpadding;
        for (int i = 0; i < rows; i++) extra -= rowHeight[i];
        float used = 0;
        int lastIndex = 0;
        for (int i = 0; i < rows; i++) {
            if (expandHeight[i] == 0)
                continue;
            float amount = extra * expandHeight[i] / totalExpandHeight;
            rowHeight[i] += amount;
            used += amount;
            lastIndex = i;
        }
        rowHeight[lastIndex] += extra - used;
    }
    // Distribute any additional width added by colspanned cells to the columns spanned.
    for (int i = 0; i < cellCount; i++) {
        Cell c = cells.get(i);
        int colspan = c.colspan;
        if (colspan == 1)
            continue;
        float extraWidth = 0;
        for (int column = c.column, nn = column + colspan; column < nn; column++) extraWidth += columnWeightedWidth[column] - columnWidth[column];
        extraWidth -= Math.max(0, c.computedPadLeft + c.computedPadRight);
        extraWidth /= colspan;
        if (extraWidth > 0) {
            for (int column = c.column, nn = column + colspan; column < nn; column++) columnWidth[column] += extraWidth;
        }
    }
    // Determine table size.
    float tableWidth = hpadding, tableHeight = vpadding;
    for (int i = 0; i < columns; i++) tableWidth += columnWidth[i];
    for (int i = 0; i < rows; i++) tableHeight += rowHeight[i];
    // Position table within the container.
    int align = this.align;
    float x = layoutX + padLeft;
    if ((align & Align.right) != 0)
        x += layoutWidth - tableWidth;
    else if (// Center
    (align & Align.left) == 0)
        x += (layoutWidth - tableWidth) / 2;
    float y = layoutY + padTop;
    if ((align & Align.bottom) != 0)
        y += layoutHeight - tableHeight;
    else if (// Center
    (align & Align.top) == 0)
        y += (layoutHeight - tableHeight) / 2;
    // Position actors within cells.
    float currentX = x, currentY = y;
    for (int i = 0; i < cellCount; i++) {
        Cell c = cells.get(i);
        float spannedCellWidth = 0;
        for (int column = c.column, nn = column + c.colspan; column < nn; column++) spannedCellWidth += columnWidth[column];
        spannedCellWidth -= c.computedPadLeft + c.computedPadRight;
        currentX += c.computedPadLeft;
        float fillX = c.fillX, fillY = c.fillY;
        if (fillX > 0) {
            c.actorWidth = Math.max(spannedCellWidth * fillX, c.minWidth.get(c.actor));
            float maxWidth = c.maxWidth.get(c.actor);
            if (maxWidth > 0)
                c.actorWidth = Math.min(c.actorWidth, maxWidth);
        }
        if (fillY > 0) {
            c.actorHeight = Math.max(rowHeight[c.row] * fillY - c.computedPadTop - c.computedPadBottom, c.minHeight.get(c.actor));
            float maxHeight = c.maxHeight.get(c.actor);
            if (maxHeight > 0)
                c.actorHeight = Math.min(c.actorHeight, maxHeight);
        }
        align = c.align;
        if ((align & Align.left) != 0)
            c.actorX = currentX;
        else if ((align & Align.right) != 0)
            c.actorX = currentX + spannedCellWidth - c.actorWidth;
        else
            c.actorX = currentX + (spannedCellWidth - c.actorWidth) / 2;
        if ((align & Align.top) != 0)
            c.actorY = currentY + c.computedPadTop;
        else if ((align & Align.bottom) != 0)
            c.actorY = currentY + rowHeight[c.row] - c.actorHeight - c.computedPadBottom;
        else
            c.actorY = currentY + (rowHeight[c.row] - c.actorHeight + c.computedPadTop - c.computedPadBottom) / 2;
        if (c.endRow) {
            currentX = x;
            currentY += rowHeight[c.row];
        } else
            currentX += spannedCellWidth + c.computedPadRight;
    }
    // Store debug rectangles.
    if (debug == Debug.none)
        return;
    clearDebugRects();
    currentX = x;
    currentY = y;
    if (debug == Debug.table || debug == Debug.all) {
        addDebugRect(layoutX, layoutY, layoutWidth, layoutHeight, debugTableColor);
        addDebugRect(x, y, tableWidth - hpadding, tableHeight - vpadding, debugTableColor);
    }
    for (int i = 0; i < cellCount; i++) {
        Cell c = cells.get(i);
        // Actor bounds.
        if (debug == Debug.actor || debug == Debug.all)
            addDebugRect(c.actorX, c.actorY, c.actorWidth, c.actorHeight, debugActorColor);
        // Cell bounds.
        float spannedCellWidth = 0;
        for (int column = c.column, nn = column + c.colspan; column < nn; column++) spannedCellWidth += columnWidth[column];
        spannedCellWidth -= c.computedPadLeft + c.computedPadRight;
        currentX += c.computedPadLeft;
        if (debug == Debug.cell || debug == Debug.all) {
            addDebugRect(currentX, currentY + c.computedPadTop, spannedCellWidth, rowHeight[c.row] - c.computedPadTop - c.computedPadBottom, debugCellColor);
        }
        if (c.endRow) {
            currentX = x;
            currentY += rowHeight[c.row];
        } else
            currentX += spannedCellWidth + c.computedPadRight;
    }
}
