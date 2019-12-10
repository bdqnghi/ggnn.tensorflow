/**
 * Increases the size of the backing vertices and indices arrays to accommodate the specified number of additional vertices and
 * rectangles. Useful before adding many rectangles to avoid multiple backing array resizes. Assumes each rectangles adds 4
 * vertices
 * @param numRectangles The number of rectangles you are about to add
 */
public void ensureRectangles(int numRectangles) {
    ensureRectangles(4 * numRectangles, numRectangles);
}
