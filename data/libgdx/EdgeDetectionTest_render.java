public void render() {
    angle += 45 * Gdx.graphics.getDeltaTime();
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    cam.update();
    matrix.setToRotation(0, 1, 0, angle);
    cam.combined.mul(matrix);
    fbo.begin();
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    Gdx.gl.glEnable(GL20.GL_DEPTH_TEST);
    modelBatch.begin(cam);
    modelBatch.render(sceneInstance);
    modelBatch.end();
    fbo.end();
    batch.begin();
    batch.disableBlending();
    batchShader.setUniformi("u_filterSize", filter.length);
    batchShader.setUniform1fv("u_filter", filter, 0, filter.length);
    batchShader.setUniform2fv("u_offsets", offsets, 0, offsets.length);
    batch.draw(fboRegion, 0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    batch.end();
    logger.log();
}
