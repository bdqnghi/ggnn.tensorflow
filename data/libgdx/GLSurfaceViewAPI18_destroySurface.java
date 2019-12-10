public void destroySurface() {
    if (LOG_EGL) {
        Log.w("EglHelper", "destroySurface()  tid=" + Thread.currentThread().getId());
    }
    destroySurfaceImp();
}
