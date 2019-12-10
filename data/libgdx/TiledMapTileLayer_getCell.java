/**
 * @param x X coordinate
 * @param y Y coordinate
 * @return {@link Cell} at (x, y)
 */
public Cell getCell(int x, int y) {
    if (x < 0 || x >= width)
        return null;
    if (y < 0 || y >= height)
        return null;
    return cells[x][y];
}
