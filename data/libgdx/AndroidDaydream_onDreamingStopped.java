@Override
public void onDreamingStopped() {
    boolean isContinuous = graphics.isContinuousRendering();
    graphics.setContinuousRendering(true);
    graphics.pause();
    input.unregisterSensorListeners();
    int[] realId = input.realId;
    // erase pointer ids. this sucks donkeyballs...
    Arrays.fill(realId, -1);
    boolean[] touched = input.touched;
    // erase touched state. this also sucks donkeyballs...
    Arrays.fill(touched, false);
    graphics.clearManagedCaches();
    graphics.destroy();
    graphics.setContinuousRendering(isContinuous);
    graphics.onPauseGLSurfaceView();
    super.onDreamingStopped();
}
