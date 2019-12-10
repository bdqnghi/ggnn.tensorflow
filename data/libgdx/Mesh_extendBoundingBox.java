/**
 * Extends the specified {@link BoundingBox} with the specified part.
 * @param out the bounding box to store the result in.
 * @param offset the start of the part.
 * @param count the size of the part.
 * @return the value specified by out.
 */
public BoundingBox extendBoundingBox(final BoundingBox out, int offset, int count, final Matrix4 transform) {
    final int numIndices = getNumIndices();
    final int numVertices = getNumVertices();
    final int max = numIndices == 0 ? numVertices : numIndices;
    if (offset < 0 || count < 1 || offset + count > max)
        throw new GdxRuntimeException("Invalid part specified ( offset=" + offset + ", count=" + count + ", max=" + max + " )");
    final FloatBuffer verts = vertices.getBuffer();
    final ShortBuffer index = indices.getBuffer();
    final VertexAttribute posAttrib = getVertexAttribute(Usage.Position);
    final int posoff = posAttrib.offset / 4;
    final int vertexSize = vertices.getAttributes().vertexSize / 4;
    final int end = offset + count;
    switch(posAttrib.numComponents) {
        case 1:
            if (numIndices > 0) {
                for (int i = offset; i < end; i++) {
                    final int idx = index.get(i) * vertexSize + posoff;
                    tmpV.set(verts.get(idx), 0, 0);
                    if (transform != null)
                        tmpV.mul(transform);
                    out.ext(tmpV);
                }
            } else {
                for (int i = offset; i < end; i++) {
                    final int idx = i * vertexSize + posoff;
                    tmpV.set(verts.get(idx), 0, 0);
                    if (transform != null)
                        tmpV.mul(transform);
                    out.ext(tmpV);
                }
            }
            break;
        case 2:
            if (numIndices > 0) {
                for (int i = offset; i < end; i++) {
                    final int idx = index.get(i) * vertexSize + posoff;
                    tmpV.set(verts.get(idx), verts.get(idx + 1), 0);
                    if (transform != null)
                        tmpV.mul(transform);
                    out.ext(tmpV);
                }
            } else {
                for (int i = offset; i < end; i++) {
                    final int idx = i * vertexSize + posoff;
                    tmpV.set(verts.get(idx), verts.get(idx + 1), 0);
                    if (transform != null)
                        tmpV.mul(transform);
                    out.ext(tmpV);
                }
            }
            break;
        case 3:
            if (numIndices > 0) {
                for (int i = offset; i < end; i++) {
                    final int idx = index.get(i) * vertexSize + posoff;
                    tmpV.set(verts.get(idx), verts.get(idx + 1), verts.get(idx + 2));
                    if (transform != null)
                        tmpV.mul(transform);
                    out.ext(tmpV);
                }
            } else {
                for (int i = offset; i < end; i++) {
                    final int idx = i * vertexSize + posoff;
                    tmpV.set(verts.get(idx), verts.get(idx + 1), verts.get(idx + 2));
                    if (transform != null)
                        tmpV.mul(transform);
                    out.ext(tmpV);
                }
            }
            break;
    }
    return out;
}
