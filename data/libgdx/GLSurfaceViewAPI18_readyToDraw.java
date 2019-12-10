private boolean readyToDraw() {
    return (!mPaused) && mHasSurface && (!mSurfaceIsBad) && (mWidth > 0) && (mHeight > 0) && (mRequestRender || (mRenderMode == RENDERMODE_CONTINUOUSLY));
}
