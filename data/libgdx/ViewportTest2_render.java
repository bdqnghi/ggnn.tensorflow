public void render() {
    batch.setProjectionMatrix(camera.projection);
    batch.setTransformMatrix(camera.view);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    // draw a white background so we are able to see the black bars
    batch.setColor(1, 1, 1, 1);
    batch.draw(texture, -4096, -4096, 4096, 4096, 8192, 8192, 1, 1, 0, 0, 0, 16, 16, false, false);
    batch.setColor(1, 0, 0, 1);
    batch.draw(texture, 150, 100, 16, 16, 32, 32, 1, 1, 45, 0, 0, 16, 16, false, false);
    font.draw(batch, viewport.getClass().getSimpleName(), 150, 100);
    batch.end();
    if (viewport instanceof ScalingViewport) {
        // This shows how to set the viewport to the whole screen and draw within the black bars.
        ScalingViewport scalingViewport = (ScalingViewport) viewport;
        int screenWidth = Gdx.graphics.getWidth();
        int screenHeight = Gdx.graphics.getHeight();
        Gdx.gl.glViewport(0, 0, screenWidth, screenHeight);
        batch.getProjectionMatrix().idt().setToOrtho2D(0, 0, screenWidth, screenHeight);
        batch.getTransformMatrix().idt();
        batch.begin();
        float leftGutterWidth = scalingViewport.getLeftGutterWidth();
        if (leftGutterWidth > 0) {
            batch.draw(texture, 0, 0, leftGutterWidth, screenHeight);
            batch.draw(texture, scalingViewport.getRightGutterX(), 0, scalingViewport.getRightGutterWidth(), screenHeight);
        }
        float bottomGutterHeight = scalingViewport.getBottomGutterHeight();
        if (bottomGutterHeight > 0) {
            batch.draw(texture, 0, 0, screenWidth, bottomGutterHeight);
            batch.draw(texture, 0, scalingViewport.getTopGutterY(), screenWidth, scalingViewport.getTopGutterHeight());
        }
        batch.end();
        // Restore viewport.
        viewport.update(screenWidth, screenHeight, true);
    }
}
