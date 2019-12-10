@Override
protected void onPause() {
    boolean isContinuous = graphics.isContinuousRendering();
    boolean isContinuousEnforced = AndroidGraphics.enforceContinuousRendering;
    // from here we don't want non continuous rendering
    AndroidGraphics.enforceContinuousRendering = true;
    graphics.setContinuousRendering(true);
    // calls to setContinuousRendering(false) from other thread (ex: GLThread)
    // will be ignored at this point...
    graphics.pause();
    input.onPause();
    if (isFinishing()) {
        graphics.clearManagedCaches();
        graphics.destroy();
    }
    AndroidGraphics.enforceContinuousRendering = isContinuousEnforced;
    graphics.setContinuousRendering(isContinuous);
    graphics.onPauseGLSurfaceView();
    super.onPause();
}
