@Override
public int getNumMaxVertices() {
    return buffer.capacity() / (attributes.vertexSize / 4);
}
