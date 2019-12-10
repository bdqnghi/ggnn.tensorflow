@Override
public void flush() {
    if (vertexIndex == 0)
        return;
    renderCalls++;
    totalRenderCalls++;
    int trianglesInBatch = triangleIndex;
    if (trianglesInBatch > maxTrianglesInBatch)
        maxTrianglesInBatch = trianglesInBatch;
    lastTexture.bind();
    Mesh mesh = this.mesh;
    mesh.setVertices(vertices, 0, vertexIndex);
    mesh.setIndices(triangles, 0, triangleIndex);
    if (blendingDisabled) {
        Gdx.gl.glDisable(GL20.GL_BLEND);
    } else {
        Gdx.gl.glEnable(GL20.GL_BLEND);
        if (blendSrcFunc != -1)
            Gdx.gl.glBlendFunc(blendSrcFunc, blendDstFunc);
    }
    mesh.render(customShader != null ? customShader : shader, GL20.GL_TRIANGLES, 0, trianglesInBatch);
    vertexIndex = 0;
    triangleIndex = 0;
}
