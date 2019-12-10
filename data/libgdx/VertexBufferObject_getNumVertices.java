@Override
public int getNumVertices() {
    return buffer.limit() / (attributes.vertexSize / 4);
}
