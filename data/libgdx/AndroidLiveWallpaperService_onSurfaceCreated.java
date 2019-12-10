/**
 * Called before surface holder callbacks (ex for GLSurfaceView)! This is called immediately after the surface is first
 * created. Implementations of this should start up whatever rendering code they desire. Note that only one thread can ever
 * draw into a Surface, so you should not draw into the Surface here if your normal rendering will be in another thread.
 */
@Override
public void onSurfaceCreated(final SurfaceHolder holder) {
    engines++;
    setLinkedEngine(this);
    if (DEBUG)
        Log.d(TAG, " > AndroidWallpaperEngine - onSurfaceCreated() " + hashCode() + ", running: " + engines + ", linked: " + (linkedEngine == this));
    Log.i(TAG, "engine surface created");
    super.onSurfaceCreated(holder);
    if (engines == 1) {
        // safeguard: recover attributes that could suffered by unexpected surfaceDestroy event
        visibleEngines = 0;
    }
    if (engines == 1 && app == null) {
        // must be initialized with zeroes
        viewFormat = 0;
        viewWidth = 0;
        viewHeight = 0;
        app = new AndroidLiveWallpaper(AndroidLiveWallpaperService.this);
        onCreateApplication();
        if (app.graphics == null)
            throw new Error("You must override 'AndroidLiveWallpaperService.onCreateApplication' method and call 'initialize' from its body.");
    }
    view = (SurfaceHolder.Callback) app.graphics.view;
    // we are going to call this events manually
    this.getSurfaceHolder().removeCallback(view);
    // inherit format from shared surface view
    engineFormat = viewFormat;
    engineWidth = viewWidth;
    engineHeight = viewHeight;
    if (engines == 1) {
        view.surfaceCreated(holder);
    } else {
        // this combination of methods is described in AndroidWallpaperEngine.onResume
        view.surfaceDestroyed(holder);
        notifySurfaceChanged(engineFormat, engineWidth, engineHeight, false);
        view.surfaceCreated(holder);
    }
    notifyPreviewState();
    notifyOffsetsChanged();
    if (!Gdx.graphics.isContinuousRendering()) {
        Gdx.graphics.requestRendering();
    }
}
