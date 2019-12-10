@Override
public void resize(int width, int height) {
    super.resize(width, height);
    camera.setToOrtho(true, width, height);
    spriteBatch.setTransformMatrix(camera.view);
    spriteBatch.setProjectionMatrix(camera.projection);
}
