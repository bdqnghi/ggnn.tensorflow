public void onDestroy() {
    // so we do what we can..
    if (graphics != null) {
        // not necessary - already called in AndroidLiveWallpaperService.onDeepPauseApplication
        // app.graphics.clearManagedCaches();
        // kill the GLThread managed by GLSurfaceView
        graphics.onDestroyGLSurfaceView();
    }
    if (audio != null) {
        // dispose audio and free native resources, mandatory since graphics.pause is never called in live wallpaper
        audio.dispose();
    }
}
