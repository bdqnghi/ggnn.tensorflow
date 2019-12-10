@Override
public void resize(int width, int height) {
    Gdx.app.log("Test", "app resized: " + width + "x" + height + ", Graphics says: " + Gdx.graphics.getWidth() + "x" + Gdx.graphics.getHeight());
}
