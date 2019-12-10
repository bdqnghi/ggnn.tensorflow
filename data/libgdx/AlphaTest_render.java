@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    batch.draw(texture, 0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    batch.end();
    Pixmap pixmap = ScreenUtils.getFrameBufferPixmap(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    int color = pixmap.getPixel(0, pixmap.getHeight() - 1);
    Gdx.app.log("AlphaTest", Integer.toHexString(color));
    pixmap.dispose();
}
