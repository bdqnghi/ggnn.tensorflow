/**
 * One of wallpaper engines is starting. Do not override this method, service manages them internally.
 */
@Override
public Engine onCreateEngine() {
    if (DEBUG)
        Log.d(TAG, " > AndroidLiveWallpaperService - onCreateEngine()");
    Log.i(TAG, "engine created");
    return new AndroidWallpaperEngine();
}
