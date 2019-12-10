@Override
public void render() {
    Gdx.gl.glClearColor(242 / 255.0f, 210 / 255.0f, 111 / 255.0f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    // keep camera in foreground layer bounds
    boolean updateCamera = false;
    if (camera.position.x < -1024 + camera.viewportWidth / 2) {
        camera.position.x = -1024 + (int) (camera.viewportWidth / 2);
        updateCamera = true;
    }
    if (camera.position.x > 1024 - camera.viewportWidth / 2) {
        camera.position.x = 1024 - (int) (camera.viewportWidth / 2);
        updateCamera = true;
    }
    if (camera.position.y < 0) {
        camera.position.y = 0;
        updateCamera = true;
    }
    // arbitrary height of scene
    if (camera.position.y > 400 - camera.viewportHeight / 2) {
        camera.position.y = 400 - (int) (camera.viewportHeight / 2);
        updateCamera = true;
    }
    // background layer, no parallax, centered around origin
    batch.setProjectionMatrix(camera.calculateParallaxMatrix(0, 0));
    batch.disableBlending();
    batch.begin();
    batch.draw(layers[0], -(int) (layers[0].getRegionWidth() / 2), -(int) (layers[0].getRegionHeight() / 2));
    batch.end();
    batch.enableBlending();
    // midground layer, 0.5 parallax (move at half speed on x, full speed on y)
    // layer is 1024x320
    batch.setProjectionMatrix(camera.calculateParallaxMatrix(0.5f, 1));
    batch.begin();
    batch.draw(layers[1], -512, -160);
    batch.end();
    // foreground layer, 1.0 parallax (move at full speed)
    // layer is 2048x320
    batch.setProjectionMatrix(camera.calculateParallaxMatrix(1f, 1));
    batch.begin();
    for (int i = 0; i < 9; i++) {
        batch.draw(layers[2], i * layers[2].getRegionWidth() - 1024, -160);
    }
    batch.end();
    // draw fps
    batch.getProjectionMatrix().setToOrtho2D(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    batch.begin();
    font.draw(batch, "fps: " + Gdx.graphics.getFramesPerSecond(), 0, 30);
    batch.end();
}
