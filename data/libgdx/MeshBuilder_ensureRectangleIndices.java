/**
 * Increases the size of the backing indices array to accommodate the specified number of additional rectangles. Useful before
 * adding many rectangles to avoid multiple backing array resizes.
 * @param numRectangles The number of rectangles you are about to add
 */
public void ensureRectangleIndices(int numRectangles) {
    if (primitiveType == GL20.GL_POINTS)
        ensureIndices(4 * numRectangles);
    else if (primitiveType == GL20.GL_LINES)
        ensureIndices(8 * numRectangles);
    else
        // GL_TRIANGLES
        ensureIndices(6 * numRectangles);
}
