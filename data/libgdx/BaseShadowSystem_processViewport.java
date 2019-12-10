/**
 * Set viewport according to allocator.
 * @param lp LightProperties to process.
 * @param cameraViewport Set camera viewport if true.
 */
protected void processViewport(LightProperties lp, boolean cameraViewport) {
    Camera camera = lp.camera;
    ShadowMapRegion r = allocator.nextResult(currentLight);
    if (r == null)
        return;
    TextureRegion region = lp.region;
    region.setTexture(frameBuffers[currentPass].getColorBufferTexture());
    Gdx.gl.glViewport(r.x, r.y, r.width, r.height);
    Gdx.gl.glScissor(r.x + 1, r.y + 1, r.width - 2, r.height - 2);
    region.setRegion(r.x, r.y, r.width, r.height);
    if (cameraViewport) {
        camera.viewportHeight = r.height;
        camera.viewportWidth = r.width;
        camera.update();
    }
}
