@Override
public void dispose() {
    batchShader.dispose();
    scene.dispose();
    fbo.dispose();
    batch.dispose();
}
