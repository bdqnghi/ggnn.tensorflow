/**
 * @param cell May be null.
 */
void merge(Cell cell) {
    if (cell == null)
        return;
    if (cell.minWidth != null)
        minWidth = cell.minWidth;
    if (cell.minHeight != null)
        minHeight = cell.minHeight;
    if (cell.prefWidth != null)
        prefWidth = cell.prefWidth;
    if (cell.prefHeight != null)
        prefHeight = cell.prefHeight;
    if (cell.maxWidth != null)
        maxWidth = cell.maxWidth;
    if (cell.maxHeight != null)
        maxHeight = cell.maxHeight;
    if (cell.spaceTop != null)
        spaceTop = cell.spaceTop;
    if (cell.spaceLeft != null)
        spaceLeft = cell.spaceLeft;
    if (cell.spaceBottom != null)
        spaceBottom = cell.spaceBottom;
    if (cell.spaceRight != null)
        spaceRight = cell.spaceRight;
    if (cell.padTop != null)
        padTop = cell.padTop;
    if (cell.padLeft != null)
        padLeft = cell.padLeft;
    if (cell.padBottom != null)
        padBottom = cell.padBottom;
    if (cell.padRight != null)
        padRight = cell.padRight;
    if (cell.fillX != null)
        fillX = cell.fillX;
    if (cell.fillY != null)
        fillY = cell.fillY;
    if (cell.align != null)
        align = cell.align;
    if (cell.expandX != null)
        expandX = cell.expandX;
    if (cell.expandY != null)
        expandY = cell.expandY;
    if (cell.colspan != null)
        colspan = cell.colspan;
    if (cell.uniformX != null)
        uniformX = cell.uniformX;
    if (cell.uniformY != null)
        uniformY = cell.uniformY;
}
