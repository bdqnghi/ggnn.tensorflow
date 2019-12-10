/**
 * Indicates that subsequent cells should be added to a new row and returns the cell values that will be used as the defaults
 * for all cells in the new row.
 */
public Cell row() {
    if (cells.size > 0) {
        endRow();
        invalidate();
    }
    if (rowDefaults != null)
        cellPool.free(rowDefaults);
    rowDefaults = obtainCell();
    rowDefaults.clear();
    return rowDefaults;
}
