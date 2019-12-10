@Override
public void resize(int width, int height) {
    cam.setToOrtho(false, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
}
