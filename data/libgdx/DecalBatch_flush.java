/**
 * Flushes vertices[0,verticesPosition[ to GL verticesPosition % Decal.SIZE must equal 0
 *
 * @param verticesPosition Amount of elements from the vertices array to flush
 */
protected void flush(ShaderProgram shader, int verticesPosition) {
    mesh.setVertices(vertices, 0, verticesPosition);
    mesh.render(shader, GL20.GL_TRIANGLES, 0, verticesPosition / 4);
}
