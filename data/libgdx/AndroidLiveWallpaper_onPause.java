public void onPause() {
    if (AndroidLiveWallpaperService.DEBUG)
        Log.d(AndroidLiveWallpaperService.TAG, " > AndroidLiveWallpaper - onPause()");
    // IMPORTANT!
    // jw: graphics.pause is never called, graphics.pause works on most devices but not on all..
    // for example on Samsung Galaxy Tab (GT-P6800) on android 4.0.4 invoking graphics.pause causes "Fatal Signal 11"
    // near mEglHelper.swap() in GLSurfaceView while processing next onPause event.
    // See related issue:
    // http://code.google.com/p/libgdx/issues/detail?id=541
    // the problem with graphics.pause occurs while using OpenGL 2.0 and original GLSurfaceView while rotating device
    // in lwp preview
    // in my opinion it is a bug of android not libgdx, even example Cubic live wallpaper from
    // Android SDK crashes on affected devices.......... and on some configurations of android emulator too.
    // 
    // My wallpaper was rejected on Samsung Apps because of this issue, so I decided to disable graphics.pause..
    // also I moved audio lifecycle methods from AndroidGraphicsLiveWallpaper into this class
    // graphics.pause();
    // if (AndroidLiveWallpaperService.DEBUG)
    // Log.d(AndroidLiveWallpaperService.TAG, " > AndroidLiveWallpaper - onPause() application paused!");
    audio.pause();
    input.onPause();
    if (graphics != null) {
        graphics.onPauseGLSurfaceView();
    }
    if (AndroidLiveWallpaperService.DEBUG)
        Log.d(AndroidLiveWallpaperService.TAG, " > AndroidLiveWallpaper - onPause() done!");
}
