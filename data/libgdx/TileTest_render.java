@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    cam.update();
    Gdx.gl.glEnable(GL20.GL_BLEND);
    Gdx.gl.glBlendFunc(GL20.GL_SRC_ALPHA, GL20.GL_ONE_MINUS_SRC_ALPHA);
    for (int i = 0; i < LAYERS; i++) {
        SpriteCache cache = caches[i];
        cache.setProjectionMatrix(cam.combined);
        cache.begin();
        for (int j = 0; j < TILES_PER_LAYER; j += BLOCK_TILES) {
            cache.draw(layers[i], j, BLOCK_TILES);
        }
        cache.end();
    }
    if (TimeUtils.nanoTime() - startTime >= 1000000000) {
        Gdx.app.log("TileTest", "fps: " + Gdx.graphics.getFramesPerSecond());
        startTime = TimeUtils.nanoTime();
    }
}
