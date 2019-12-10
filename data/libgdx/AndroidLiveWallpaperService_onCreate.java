@Override
public void onCreate(final SurfaceHolder surfaceHolder) {
    if (DEBUG)
        Log.d(TAG, " > AndroidWallpaperEngine - onCreate() " + hashCode() + " running: " + engines + ", linked: " + (linkedEngine == this) + ", thread: " + Thread.currentThread().toString());
    super.onCreate(surfaceHolder);
}
