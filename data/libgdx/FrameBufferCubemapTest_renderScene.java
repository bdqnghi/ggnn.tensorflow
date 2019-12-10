public void renderScene() {
    Gdx.gl.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl.glDisable(GL20.GL_SCISSOR_TEST);
    // Render scene to screen
    super.render();
    // Render scene to cubemap
    camFb.position.set(cam.position);
    camFb.near = cam.near;
    camFb.far = cam.far;
    fb.begin();
    while (fb.nextSide()) {
        fb.getSide().getUp(camFb.up);
        fb.getSide().getDirection(camFb.direction);
        camFb.update();
        Gdx.gl.glClearColor(1, 1, 1, 1);
        Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
        modelBatch.begin(camFb);
        for (ModelInstance instance : instances) modelBatch.render(instance, lights);
        if (space != null)
            modelBatch.render(space);
        modelBatch.end();
    }
    fb.end();
    cubemap = fb.getColorBufferTexture();
}
