/**
 * Sets the {@link Cell} at the given coordinates.
 *
 * @param x X coordinate
 * @param y Y coordinate
 * @param cell the {@link Cell} to set at the given coordinates.
 */
public void setCell(int x, int y, Cell cell) {
    if (x < 0 || x >= width)
        return;
    if (y < 0 || y >= height)
        return;
    cells[x][y] = cell;
}
