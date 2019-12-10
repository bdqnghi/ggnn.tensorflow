/**
 * Calculates the squared radius of the bounding sphere around the specified center for the specified part.
 * @param centerX The X coordinate of the center of the bounding sphere
 * @param centerY The Y coordinate of the center of the bounding sphere
 * @param centerZ The Z coordinate of the center of the bounding sphere
 * @param offset the start index of the part.
 * @param count the amount of indices the part contains.
 * @return the squared radius of the bounding sphere.
 */
public float calculateRadiusSquared(final float centerX, final float centerY, final float centerZ, int offset, int count, final Matrix4 transform) {
    int numIndices = getNumIndices();
    if (offset < 0 || count < 1 || offset + count > numIndices)
        throw new GdxRuntimeException("Not enough indices");
    final FloatBuffer verts = vertices.getBuffer();
    final ShortBuffer index = indices.getBuffer();
    final VertexAttribute posAttrib = getVertexAttribute(Usage.Position);
    final int posoff = posAttrib.offset / 4;
    final int vertexSize = vertices.getAttributes().vertexSize / 4;
    final int end = offset + count;
    float result = 0;
    switch(posAttrib.numComponents) {
        case 1:
            for (int i = offset; i < end; i++) {
                final int idx = index.get(i) * vertexSize + posoff;
                tmpV.set(verts.get(idx), 0, 0);
                if (transform != null)
                    tmpV.mul(transform);
                final float r = tmpV.sub(centerX, centerY, centerZ).len2();
                if (r > result)
                    result = r;
            }
            break;
        case 2:
            for (int i = offset; i < end; i++) {
                final int idx = index.get(i) * vertexSize + posoff;
                tmpV.set(verts.get(idx), verts.get(idx + 1), 0);
                if (transform != null)
                    tmpV.mul(transform);
                final float r = tmpV.sub(centerX, centerY, centerZ).len2();
                if (r > result)
                    result = r;
            }
            break;
        case 3:
            for (int i = offset; i < end; i++) {
                final int idx = index.get(i) * vertexSize + posoff;
                tmpV.set(verts.get(idx), verts.get(idx + 1), verts.get(idx + 2));
                if (transform != null)
                    tmpV.mul(transform);
                final float r = tmpV.sub(centerX, centerY, centerZ).len2();
                if (r > result)
                    result = r;
            }
            break;
    }
    return result;
}
