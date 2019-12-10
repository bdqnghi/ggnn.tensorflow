@Override
public void resize(int width, int height) {
    spriteBatch.getProjectionMatrix().setToOrtho2D(0, 0, width, height);
    camera.viewportWidth = width;
    camera.viewportHeight = height;
    camera.update();
}
