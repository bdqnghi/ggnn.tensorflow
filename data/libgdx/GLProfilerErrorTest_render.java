@Override
public void render() {
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    if (makeGlError) {
        makeGlError = false;
        try {
            // Random invalid value, will raise GL_INVALID_VALUE (0x501, 1281)
            Gdx.gl.glClear(42);
        } catch (GdxRuntimeException glError) {
            if ("GLProfiler: Got gl error GL_INVALID_VALUE".equals(glError.getMessage())) {
                message = "Got expected exception.";
            } else {
                message = "Got GdxRuntimeException (correct) but with unexpected message: " + glError.getMessage();
            }
            Gdx.app.log("GLProfilerTest", "Caught exception: ", glError);
        }
    }
    int x = 10;
    int y = Gdx.graphics.getHeight() - 10;
    y -= font.draw(batch, "e - Enable debugging\n" + "d - Disable debugging\n" + "l - Test log error listener\n" + "t - Test throw error listener\n" + "c - Test custom listener\n\n" + "Expected error: GL_INVALID_VALUE (0x501, 1281)", x, y).height;
    y -= 10;
    font.draw(batch, message, x, y);
    batch.end();
}
