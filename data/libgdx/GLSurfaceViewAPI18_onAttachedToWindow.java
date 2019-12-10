/**
 * This method is used as part of the View class and is not normally
 * called or subclassed by clients of GLSurfaceView.
 */
@Override
protected void onAttachedToWindow() {
    super.onAttachedToWindow();
    if (LOG_ATTACH_DETACH) {
        Log.d(TAG, "onAttachedToWindow reattach =" + mDetached);
    }
    if (mDetached && (mRenderer != null)) {
        int renderMode = RENDERMODE_CONTINUOUSLY;
        if (mGLThread != null) {
            renderMode = mGLThread.getRenderMode();
        }
        mGLThread = new GLThread(mThisWeakRef);
        if (renderMode != RENDERMODE_CONTINUOUSLY) {
            mGLThread.setRenderMode(renderMode);
        }
        mGLThread.start();
    }
    mDetached = false;
}
