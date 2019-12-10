public int getNumMaxVertices() {
    return byteBuffer.capacity() / attributes.vertexSize;
}
