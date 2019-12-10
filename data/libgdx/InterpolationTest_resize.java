public void resize(int width, int height) {
    stage.getViewport().update(width, height, true);
    table.invalidateHierarchy();
    renderer.setProjectionMatrix(stage.getViewport().getCamera().combined);
}
