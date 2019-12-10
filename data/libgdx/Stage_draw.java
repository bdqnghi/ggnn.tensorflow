public void draw() {
    Camera camera = viewport.getCamera();
    camera.update();
    if (!root.isVisible())
        return;
    Batch batch = this.batch;
    if (batch != null) {
        batch.setProjectionMatrix(camera.combined);
        batch.begin();
        root.draw(batch, 1);
        batch.end();
    }
    if (debug)
        drawDebug();
}
