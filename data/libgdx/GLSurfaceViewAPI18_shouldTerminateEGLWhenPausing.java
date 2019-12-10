public synchronized boolean shouldTerminateEGLWhenPausing() {
    checkGLESVersion();
    return !mMultipleGLESContextsAllowed;
}
