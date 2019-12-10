private void checkRenderThreadState() {
    if (mGLThread != null) {
        throw new IllegalStateException("setRenderer has already been called for this instance.");
    }
}
