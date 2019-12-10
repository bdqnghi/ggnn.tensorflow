public void onPauseGLSurfaceView() {
    if (view != null) {
        if (view instanceof GLSurfaceViewAPI18)
            ((GLSurfaceViewAPI18) view).onPause();
        if (view instanceof GLSurfaceView)
            ((GLSurfaceView) view).onPause();
    }
}
