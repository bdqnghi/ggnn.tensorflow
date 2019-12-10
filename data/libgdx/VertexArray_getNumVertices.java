@Override
public int getNumVertices() {
    return buffer.limit() * 4 / attributes.vertexSize;
}
