/**
 * Increases the size of the backing indices array to accommodate the specified number of additional triangles. Useful before
 * adding many triangles to avoid multiple backing array resizes.
 * @param numTriangles The number of triangles you are about to add
 */
public void ensureTriangleIndices(int numTriangles) {
    if (primitiveType == GL20.GL_LINES)
        ensureIndices(6 * numTriangles);
    else if (primitiveType == GL20.GL_TRIANGLES || primitiveType == GL20.GL_POINTS)
        ensureIndices(3 * numTriangles);
    else
        throw new GdxRuntimeException("Incorrect primtive type");
}
