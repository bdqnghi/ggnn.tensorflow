@Override
public void draw(GLKView view, CGRect rect) {
    makeCurrent();
    // massive hack, GLKView resets the viewport on each draw call, so IOSGLES20
    // stores the last known viewport and we reset it here...
    gl20.glViewport(IOSGLES20.x, IOSGLES20.y, IOSGLES20.width, IOSGLES20.height);
    if (!created) {
        gl20.glViewport(0, 0, width, height);
        app.listener.create();
        app.listener.resize(width, height);
        created = true;
    }
    if (appPaused) {
        return;
    }
    long time = System.nanoTime();
    deltaTime = (time - lastFrameTime) / 1000000000.0f;
    lastFrameTime = time;
    frames++;
    if (time - framesStart >= 1000000000l) {
        framesStart = time;
        fps = frames;
        frames = 0;
    }
    input.processEvents();
    frameId++;
    app.listener.render();
}
