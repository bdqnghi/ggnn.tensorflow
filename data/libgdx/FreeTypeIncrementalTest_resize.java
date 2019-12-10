public void resize(int width, int height) {
    batch.getProjectionMatrix().setToOrtho2D(0, 0, width, height);
    shapes.setProjectionMatrix(batch.getProjectionMatrix());
}
