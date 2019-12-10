public void resize(int width, int height) {
    spriteBatch.getProjectionMatrix().setToOrtho2D(0, 0, width, height);
    renderer.setProjectionMatrix(spriteBatch.getProjectionMatrix());
    stage.getViewport().update(width, height, true);
}
