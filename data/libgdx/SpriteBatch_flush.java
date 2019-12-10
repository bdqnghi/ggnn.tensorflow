@Override
public void flush() {
    if (idx == 0)
        return;
    renderCalls++;
    totalRenderCalls++;
    int spritesInBatch = idx / 20;
    if (spritesInBatch > maxSpritesInBatch)
        maxSpritesInBatch = spritesInBatch;
    int count = spritesInBatch * 6;
    lastTexture.bind();
    Mesh mesh = this.mesh;
    mesh.setVertices(vertices, 0, idx);
    mesh.getIndicesBuffer().position(0);
    mesh.getIndicesBuffer().limit(count);
    if (blendingDisabled) {
        Gdx.gl.glDisable(GL20.GL_BLEND);
    } else {
        Gdx.gl.glEnable(GL20.GL_BLEND);
        if (blendSrcFunc != -1)
            Gdx.gl.glBlendFunc(blendSrcFunc, blendDstFunc);
    }
    mesh.render(customShader != null ? customShader : shader, GL20.GL_TRIANGLES, 0, count);
    idx = 0;
}
