@Override
public void requestRendering() {
    if (view != null) {
        if (view instanceof GLSurfaceViewAPI18)
            ((GLSurfaceViewAPI18) view).requestRender();
        if (view instanceof GLSurfaceView)
            ((GLSurfaceView) view).requestRender();
    }
}
