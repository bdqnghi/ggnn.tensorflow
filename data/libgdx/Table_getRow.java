/**
 * Returns the row index for the y coordinate, or -1 if there are no cells.
 * @param y The y coordinate, where 0 is the top of the table.
 */
public int getRow(float y) {
    Array<Cell> cells = this.cells;
    int row = 0;
    y += getPadTop();
    int i = 0, n = cells.size;
    if (n == 0)
        return -1;
    if (n == 1)
        return 0;
    while (i < n) {
        Cell c = cells.get(i++);
        if (c.actorY + c.computedPadTop < y)
            break;
        if (c.endRow)
            row++;
    }
    return row;
}
