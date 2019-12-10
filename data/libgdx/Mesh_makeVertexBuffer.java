private VertexData makeVertexBuffer(boolean isStatic, int maxVertices, VertexAttributes vertexAttributes) {
    if (Gdx.gl30 != null) {
        return new VertexBufferObjectWithVAO(isStatic, maxVertices, vertexAttributes);
    } else {
        return new VertexBufferObject(isStatic, maxVertices, vertexAttributes);
    }
}
