@Override
public void update(GLKViewController controller) {
    makeCurrent();
    app.processRunnables();
    // and if we haven't requested a frame in the last loop iteration
    if (!isContinuous && !isFrameRequested) {
        viewController.setPaused(true);
    }
    isFrameRequested = false;
}
