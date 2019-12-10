@Override
public void render() {
    Gdx.gl.glClearColor(0.4f, 0.4f, 0.4f, 1f);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    modelBatch.begin(camera);
    modelBatch.render(voxelWorld, lights);
    modelBatch.end();
    controller.update();
    spriteBatch.begin();
    font.draw(spriteBatch, "fps: " + Gdx.graphics.getFramesPerSecond() + ", #visible chunks: " + voxelWorld.renderedChunks + "/" + voxelWorld.numChunks, 0, 20);
    spriteBatch.end();
}
