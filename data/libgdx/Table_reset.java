/**
 * Removes all actors and cells from the table (same as {@link #clear()}) and additionally resets all table properties and
 * cell, column, and row defaults.
 */
public void reset() {
    clear();
    padTop = backgroundTop;
    padLeft = backgroundLeft;
    padBottom = backgroundBottom;
    padRight = backgroundRight;
    align = Align.center;
    debug(Debug.none);
    cellDefaults.reset();
    for (int i = 0, n = columnDefaults.size; i < n; i++) {
        Cell columnCell = columnDefaults.get(i);
        if (columnCell != null)
            cellPool.free(columnCell);
    }
    columnDefaults.clear();
}
