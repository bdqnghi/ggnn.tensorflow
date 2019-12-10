// engines live there
/**
 * Called when the last engine is ending its live, it can occur when: 1. service is dying 2. service is switching from one
 * engine to another 3. [only my assumption] when wallpaper is not visible and system is going to restore some memory for
 * foreground processing by disposing not used wallpaper engine We can't destroy app there, because: 1. in won't work - gl
 * context is disposed right now and after app.onDestroy() app would stuck somewhere in gl thread synchronizing code 2. we
 * don't know if service create more engines, app is shared between them and should stay initialized waiting for new engines
 */
public void onDeepPauseApplication() {
    if (DEBUG)
        Log.d(TAG, " > AndroidLiveWallpaperService - onDeepPauseApplication()");
    // free native resources consuming runtime memory, note that it can cause some lag when resuming wallpaper
    if (app != null) {
        app.graphics.clearManagedCaches();
    }
}
