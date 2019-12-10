@Override
public void setContinuousRendering(boolean isContinuous) {
    if (view != null) {
        // ignore setContinuousRendering(false) while pausing
        this.isContinuous = enforceContinuousRendering || isContinuous;
        int renderMode = this.isContinuous ? GLSurfaceView.RENDERMODE_CONTINUOUSLY : GLSurfaceView.RENDERMODE_WHEN_DIRTY;
        if (view instanceof GLSurfaceViewAPI18)
            ((GLSurfaceViewAPI18) view).setRenderMode(renderMode);
        if (view instanceof GLSurfaceView)
            ((GLSurfaceView) view).setRenderMode(renderMode);
        mean.clear();
    }
}
