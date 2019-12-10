/**
 * libGDX application is starting, it occurs after first wallpaper engine had started. Override this method an invoke
 * {@link AndroidLiveWallpaperService#initialize(ApplicationListener, AndroidApplicationConfiguration)} from there.
 */
public void onCreateApplication() {
    if (DEBUG)
        Log.d(TAG, " > AndroidLiveWallpaperService - onCreateApplication()");
}
