public void resize(int width, int height) {
    ui.getViewport().update(width, height, true);
    container.setSize(width, height);
    if (test != null) {
        test.resize(width, height);
    }
}
