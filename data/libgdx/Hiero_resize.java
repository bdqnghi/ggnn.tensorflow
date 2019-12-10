public void resize(int width, int height) {
    this.width = width;
    this.height = height;
    batch.getProjectionMatrix().setToOrtho2D(0, 0, width, height);
}
