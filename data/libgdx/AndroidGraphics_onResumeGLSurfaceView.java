public void onResumeGLSurfaceView() {
    if (view != null) {
        if (view instanceof GLSurfaceViewAPI18)
            ((GLSurfaceViewAPI18) view).onResume();
        if (view instanceof GLSurfaceView)
            ((GLSurfaceView) view).onResume();
    }
}
