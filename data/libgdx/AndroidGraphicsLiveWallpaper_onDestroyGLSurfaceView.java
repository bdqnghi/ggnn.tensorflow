// kill the GLThread managed by GLSurfaceView (only for GLSurfaceView because GLSurffaceViewCupcake stops thread in
// onPause events - which is not as easy and safe for GLSurfaceView)
public void onDestroyGLSurfaceView() {
    if (view != null) {
        if (view instanceof GLSurfaceView || view instanceof GLSurfaceViewAPI18) {
            try {
                // onDestroy redirects to onDetachedFromWindow - which stops GLThread by calling mGLThread.requestExitAndWait()
                view.getClass().getMethod("onDestroy").invoke(view);
                if (AndroidLiveWallpaperService.DEBUG)
                    Log.d(AndroidLiveWallpaperService.TAG, " > AndroidLiveWallpaper - onDestroy() stopped GLThread managed by GLSurfaceView");
            } catch (Throwable t) {
                // error while scheduling exit of GLThread, GLThread will remain live and wallpaper service
                // wouldn't be able to shutdown completely
                Log.e(AndroidLiveWallpaperService.TAG, "failed to destroy GLSurfaceView's thread! GLSurfaceView.onDetachedFromWindow impl changed since API lvl 16!");
                t.printStackTrace();
            }
        }
    }
}
