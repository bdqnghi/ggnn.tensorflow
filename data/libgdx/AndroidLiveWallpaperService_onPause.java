public void onPause() {
    visibleEngines--;
    if (DEBUG)
        Log.d(TAG, " > AndroidWallpaperEngine - onPause() " + hashCode() + ", running: " + engines + ", linked: " + (linkedEngine == this) + ", visible: " + visibleEngines);
    Log.i(TAG, "engine paused");
    // drain battery.. shortly!
    if (visibleEngines >= engines) {
        Log.e(AndroidLiveWallpaperService.TAG, "wallpaper lifecycle error, counted too many visible engines! repairing..");
        visibleEngines = Math.max(engines - 1, 0);
    }
    if (linkedEngine != null) {
        if (visibleEngines == 0)
            app.onPause();
    }
    if (DEBUG)
        Log.d(TAG, " > AndroidWallpaperEngine - onPause() done!");
}
