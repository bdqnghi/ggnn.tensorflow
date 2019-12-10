/**
 * Called after surface holder callbacks (ex for GLSurfaceView)! This is called immediately before a surface is being
 * destroyed. After returning from this call, you should no longer try to access this surface. If you have a rendering
 * thread that directly accesses the surface, you must ensure that thread is no longer touching the Surface before returning
 * from this function.
 *
 * Attention! In some cases GL context may be shutdown right now! and SurfaceHolder.Surface.isVaild = false
 */
@Override
public void onSurfaceDestroyed(final SurfaceHolder holder) {
    engines--;
    if (DEBUG)
        Log.d(TAG, " > AndroidWallpaperEngine - onSurfaceDestroyed() " + hashCode() + ", running: " + engines + " ,linked: " + (linkedEngine == this) + ", isVisible: " + engineIsVisible);
    Log.i(TAG, "engine surface destroyed");
    // it is too late to call app.onDispose, just free native resources
    if (engines == 0)
        onDeepPauseApplication();
    // free surface if it belongs to this engine and if it was initialized
    if (linkedEngine == this && view != null)
        view.surfaceDestroyed(holder);
    // waitingSurfaceChangedEvent = null;
    engineFormat = 0;
    engineWidth = 0;
    engineHeight = 0;
    // safeguard for other engine callbacks
    if (engines == 0)
        linkedEngine = null;
    super.onSurfaceDestroyed(holder);
}
