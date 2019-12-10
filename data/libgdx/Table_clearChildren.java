/**
 * Removes all actors and cells from the table.
 */
public void clearChildren() {
    Array<Cell> cells = this.cells;
    for (int i = cells.size - 1; i >= 0; i--) {
        Cell cell = cells.get(i);
        Actor actor = cell.actor;
        if (actor != null)
            actor.remove();
    }
    cellPool.freeAll(cells);
    cells.clear();
    rows = 0;
    columns = 0;
    if (rowDefaults != null)
        cellPool.free(rowDefaults);
    rowDefaults = null;
    implicitEndRow = false;
    super.clearChildren();
}
