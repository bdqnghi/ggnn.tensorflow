private void computeSize() {
    sizeInvalid = false;
    Array<Cell> cells = this.cells;
    int cellCount = cells.size;
    // Implicitly End the row for layout purposes.
    if (cellCount > 0 && !cells.peek().endRow) {
        endRow();
        implicitEndRow = true;
    } else
        implicitEndRow = false;
    int columns = this.columns, rows = this.rows;
    float[] columnMinWidth = this.columnMinWidth = ensureSize(this.columnMinWidth, columns);
    float[] rowMinHeight = this.rowMinHeight = ensureSize(this.rowMinHeight, rows);
    float[] columnPrefWidth = this.columnPrefWidth = ensureSize(this.columnPrefWidth, columns);
    float[] rowPrefHeight = this.rowPrefHeight = ensureSize(this.rowPrefHeight, rows);
    float[] columnWidth = this.columnWidth = ensureSize(this.columnWidth, columns);
    float[] rowHeight = this.rowHeight = ensureSize(this.rowHeight, rows);
    float[] expandWidth = this.expandWidth = ensureSize(this.expandWidth, columns);
    float[] expandHeight = this.expandHeight = ensureSize(this.expandHeight, rows);
    float spaceRightLast = 0;
    for (int i = 0; i < cellCount; i++) {
        Cell c = cells.get(i);
        int column = c.column, row = c.row, colspan = c.colspan;
        Actor a = c.actor;
        // Collect rows that expand and colspan=1 columns that expand.
        if (c.expandY != 0 && expandHeight[row] == 0)
            expandHeight[row] = c.expandY;
        if (colspan == 1 && c.expandX != 0 && expandWidth[column] == 0)
            expandWidth[column] = c.expandX;
        // Compute combined padding/spacing for cells.
        // Spacing between actors isn't additive, the larger is used. Also, no spacing around edges.
        c.computedPadLeft = c.padLeft.get(a) + (column == 0 ? 0 : Math.max(0, c.spaceLeft.get(a) - spaceRightLast));
        c.computedPadTop = c.padTop.get(a);
        if (c.cellAboveIndex != -1) {
            Cell above = cells.get(c.cellAboveIndex);
            c.computedPadTop += Math.max(0, c.spaceTop.get(a) - above.spaceBottom.get(a));
        }
        float spaceRight = c.spaceRight.get(a);
        c.computedPadRight = c.padRight.get(a) + ((column + colspan) == columns ? 0 : spaceRight);
        c.computedPadBottom = c.padBottom.get(a) + (row == rows - 1 ? 0 : c.spaceBottom.get(a));
        spaceRightLast = spaceRight;
        // Determine minimum and preferred cell sizes.
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
        if (colspan == 1) {
            // Spanned column min and pref width is added later.
            float hpadding = c.computedPadLeft + c.computedPadRight;
            columnPrefWidth[column] = Math.max(columnPrefWidth[column], prefWidth + hpadding);
            columnMinWidth[column] = Math.max(columnMinWidth[column], minWidth + hpadding);
        }
        float vpadding = c.computedPadTop + c.computedPadBottom;
        rowPrefHeight[row] = Math.max(rowPrefHeight[row], prefHeight + vpadding);
        rowMinHeight[row] = Math.max(rowMinHeight[row], minHeight + vpadding);
    }
    float uniformMinWidth = 0, uniformMinHeight = 0;
    float uniformPrefWidth = 0, uniformPrefHeight = 0;
    for (int i = 0; i < cellCount; i++) {
        Cell c = cells.get(i);
        int column = c.column;
        // Colspan with expand will expand all spanned columns if none of the spanned columns have expand.
        int expandX = c.expandX;
        outer: if (expandX != 0) {
            int nn = column + c.colspan;
            for (int ii = column; ii < nn; ii++) if (expandWidth[ii] != 0)
                break outer;
            for (int ii = column; ii < nn; ii++) expandWidth[ii] = expandX;
        }
        // Collect uniform sizes.
        if (c.uniformX == Boolean.TRUE && c.colspan == 1) {
            float hpadding = c.computedPadLeft + c.computedPadRight;
            uniformMinWidth = Math.max(uniformMinWidth, columnMinWidth[column] - hpadding);
            uniformPrefWidth = Math.max(uniformPrefWidth, columnPrefWidth[column] - hpadding);
        }
        if (c.uniformY == Boolean.TRUE) {
            float vpadding = c.computedPadTop + c.computedPadBottom;
            uniformMinHeight = Math.max(uniformMinHeight, rowMinHeight[c.row] - vpadding);
            uniformPrefHeight = Math.max(uniformPrefHeight, rowPrefHeight[c.row] - vpadding);
        }
    }
    // Size uniform cells to the same width/height.
    if (uniformPrefWidth > 0 || uniformPrefHeight > 0) {
        for (int i = 0; i < cellCount; i++) {
            Cell c = cells.get(i);
            if (uniformPrefWidth > 0 && c.uniformX == Boolean.TRUE && c.colspan == 1) {
                float hpadding = c.computedPadLeft + c.computedPadRight;
                columnMinWidth[c.column] = uniformMinWidth + hpadding;
                columnPrefWidth[c.column] = uniformPrefWidth + hpadding;
            }
            if (uniformPrefHeight > 0 && c.uniformY == Boolean.TRUE) {
                float vpadding = c.computedPadTop + c.computedPadBottom;
                rowMinHeight[c.row] = uniformMinHeight + vpadding;
                rowPrefHeight[c.row] = uniformPrefHeight + vpadding;
            }
        }
    }
    // Distribute any additional min and pref width added by colspanned cells to the columns spanned.
    for (int i = 0; i < cellCount; i++) {
        Cell c = cells.get(i);
        int colspan = c.colspan;
        if (colspan == 1)
            continue;
        int column = c.column;
        Actor a = c.actor;
        float minWidth = c.minWidth.get(a);
        float prefWidth = c.prefWidth.get(a);
        float maxWidth = c.maxWidth.get(a);
        if (prefWidth < minWidth)
            prefWidth = minWidth;
        if (maxWidth > 0 && prefWidth > maxWidth)
            prefWidth = maxWidth;
        float spannedMinWidth = -(c.computedPadLeft + c.computedPadRight), spannedPrefWidth = spannedMinWidth;
        float totalExpandWidth = 0;
        for (int ii = column, nn = ii + colspan; ii < nn; ii++) {
            spannedMinWidth += columnMinWidth[ii];
            spannedPrefWidth += columnPrefWidth[ii];
            // Distribute extra space using expand, if any columns have expand.
            totalExpandWidth += expandWidth[ii];
        }
        float extraMinWidth = Math.max(0, minWidth - spannedMinWidth);
        float extraPrefWidth = Math.max(0, prefWidth - spannedPrefWidth);
        for (int ii = column, nn = ii + colspan; ii < nn; ii++) {
            float ratio = totalExpandWidth == 0 ? 1f / colspan : expandWidth[ii] / totalExpandWidth;
            columnMinWidth[ii] += extraMinWidth * ratio;
            columnPrefWidth[ii] += extraPrefWidth * ratio;
        }
    }
    // Determine table min and pref size.
    tableMinWidth = 0;
    tableMinHeight = 0;
    tablePrefWidth = 0;
    tablePrefHeight = 0;
    for (int i = 0; i < columns; i++) {
        tableMinWidth += columnMinWidth[i];
        tablePrefWidth += columnPrefWidth[i];
    }
    for (int i = 0; i < rows; i++) {
        tableMinHeight += rowMinHeight[i];
        tablePrefHeight += Math.max(rowMinHeight[i], rowPrefHeight[i]);
    }
    float hpadding = padLeft.get(this) + padRight.get(this);
    float vpadding = padTop.get(this) + padBottom.get(this);
    tableMinWidth = tableMinWidth + hpadding;
    tableMinHeight = tableMinHeight + vpadding;
    tablePrefWidth = Math.max(tablePrefWidth + hpadding, tableMinWidth);
    tablePrefHeight = Math.max(tablePrefHeight + vpadding, tableMinHeight);
}
