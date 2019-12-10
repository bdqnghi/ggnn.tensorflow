/**
 * Returns the cell for the specified actor in this table, or null.
 */
public <T extends Actor> Cell<T> getCell(T actor) {
    Array<Cell> cells = this.cells;
    for (int i = 0, n = cells.size; i < n; i++) {
        Cell c = cells.get(i);
        if (c.actor == actor)
            return c;
    }
    return null;
}
