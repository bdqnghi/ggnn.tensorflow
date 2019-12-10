@Override
public void dispose() {
    modelBatch.dispose();
    model.dispose();
    cubemap.dispose();
    image.dispose();
    batch.dispose();
    etc1aShader.dispose();
}
