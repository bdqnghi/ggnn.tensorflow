/**
 * This method is used as part of the View class and is not normally
 * called or subclassed by clients of GLSurfaceView.
 * Must not be called before a renderer has been set.
 */
@Override
protected void onDetachedFromWindow() {
    if (LOG_ATTACH_DETACH) {
        Log.d(TAG, "onDetachedFromWindow");
    }
    if (mGLThread != null) {
        mGLThread.requestExitAndWait();
    }
    mDetached = true;
    super.onDetachedFromWindow();
}
