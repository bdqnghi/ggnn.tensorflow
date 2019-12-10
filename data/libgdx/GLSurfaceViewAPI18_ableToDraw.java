public boolean ableToDraw() {
    return mHaveEglContext && mHaveEglSurface && readyToDraw();
}
