@Override
public void onPause() {
    boolean isContinuous = graphics.isContinuousRendering();
    boolean isContinuousEnforced = AndroidGraphics.enforceContinuousRendering;
    // from here we don't want non continuous rendering
    AndroidGraphics.enforceContinuousRendering = true;
    graphics.setContinuousRendering(true);
    // calls to setContinuousRendering(false) from other thread (ex: GLThread)
    // will be ignored at this point...
    graphics.pause();
    input.onPause();
    // This fragment (or one of the parent)  is currently being removed from its activity or the activity is in the process of finishing
    if (isRemoving() || isAnyParentFragmentRemoving() || getActivity().isFinishing()) {
        graphics.clearManagedCaches();
        graphics.destroy();
    }
    AndroidGraphics.enforceContinuousRendering = isContinuousEnforced;
    graphics.setContinuousRendering(isContinuous);
    graphics.onPauseGLSurfaceView();
    super.onPause();
}
