@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    controller.update();
    camera.update();
    batch.setProjectionMatrix(camera.combined);
    batch.begin();
    batch.draw(texture, 0, 0, texture.getWidth() * 2, texture.getHeight() * 2);
    batch.end();
}
