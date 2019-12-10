public void flush() {
    if (numVertices == 0)
        return;
    shader.begin();
    shader.setUniformMatrix("u_projModelView", projModelView);
    for (int i = 0; i < numTexCoords; i++) shader.setUniformi(shaderUniformNames[i], i);
    mesh.setVertices(vertices, 0, vertexIdx);
    mesh.render(shader, primitiveType);
    shader.end();
    numSetTexCoords = 0;
    vertexIdx = 0;
    numVertices = 0;
}
