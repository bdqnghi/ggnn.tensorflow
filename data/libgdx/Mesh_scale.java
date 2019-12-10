/**
 * Method to scale the positions in the mesh. Normals will be kept as is. This is a potentially slow operation, use with care.
 * It will also create a temporary float[] which will be garbage collected.
 *
 * @param scaleX scale on x
 * @param scaleY scale on y
 * @param scaleZ scale on z
 */
public void scale(float scaleX, float scaleY, float scaleZ) {
    final VertexAttribute posAttr = getVertexAttribute(Usage.Position);
    final int offset = posAttr.offset / 4;
    final int numComponents = posAttr.numComponents;
    final int numVertices = getNumVertices();
    final int vertexSize = getVertexSize() / 4;
    final float[] vertices = new float[numVertices * vertexSize];
    getVertices(vertices);
    int idx = offset;
    switch(numComponents) {
        case 1:
            for (int i = 0; i < numVertices; i++) {
                vertices[idx] *= scaleX;
                idx += vertexSize;
            }
            break;
        case 2:
            for (int i = 0; i < numVertices; i++) {
                vertices[idx] *= scaleX;
                vertices[idx + 1] *= scaleY;
                idx += vertexSize;
            }
            break;
        case 3:
            for (int i = 0; i < numVertices; i++) {
                vertices[idx] *= scaleX;
                vertices[idx + 1] *= scaleY;
                vertices[idx + 2] *= scaleZ;
                idx += vertexSize;
            }
            break;
    }
    setVertices(vertices);
}
