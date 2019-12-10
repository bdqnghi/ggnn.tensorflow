public void resize(int width, int height) {
    renderer.getProjectionMatrix().setToOrtho2D(0, 0, width, height);
    renderer.updateMatrices();
}
