/**
 * Getter for SurfaceHolder object, surface holder is required to restore gl context in GLSurfaceView
 */
public SurfaceHolder getSurfaceHolder() {
    if (DEBUG)
        Log.d(TAG, " > AndroidLiveWallpaperService - getSurfaceHolder()");
    synchronized (sync) {
        if (linkedEngine == null)
            return null;
        else
            return linkedEngine.getSurfaceHolder();
    }
}
