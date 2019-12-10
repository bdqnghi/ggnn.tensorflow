private void renderWorld() {
    float[] colors = backgroundColor.getColors();
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    Gdx.gl.glClearColor(colors[0], colors[1], colors[2], 0);
    modelBatch.begin(worldCamera);
    if (isDrawXYZ)
        modelBatch.render(xyzInstance);
    if (isDrawXZPlane)
        modelBatch.render(xzPlaneInstance);
    if (isDrawXYPlane)
        modelBatch.render(xyPlaneInstance);
    particleSystem.begin();
    particleSystem.draw();
    particleSystem.end();
    // Draw
    modelBatch.render(particleSystem, environment);
    modelBatch.end();
    ui.draw();
}
