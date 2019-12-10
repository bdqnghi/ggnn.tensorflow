@Override
public void resize(int width, int height) {
    Gdx.app.log("FullscreenTest", "resized: " + width + ", " + height);
    Gdx.gl.glViewport(0, 0, width, height);
}
