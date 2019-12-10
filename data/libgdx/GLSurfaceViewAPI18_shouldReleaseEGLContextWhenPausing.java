public synchronized boolean shouldReleaseEGLContextWhenPausing() {
    // Otherwise the device could run out of EGL contexts.
    return mLimitedGLESContexts;
}
