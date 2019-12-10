public void onResume() {
    visibleEngines++;
    if (DEBUG)
        Log.d(TAG, " > AndroidWallpaperEngine - onResume() " + hashCode() + ", running: " + engines + ", linked: " + (linkedEngine == this) + ", visible: " + visibleEngines);
    Log.i(TAG, "engine resumed");
    if (linkedEngine != null) {
        if (linkedEngine != this) {
            setLinkedEngine(this);
            // disconnect surface view from previous window
            // force gl surface reload, new instance will be created on current
            view.surfaceDestroyed(this.getSurfaceHolder());
            // surface holder
            // resize surface to match window associated with current engine
            notifySurfaceChanged(engineFormat, engineWidth, engineHeight, false);
            // connect surface view to current engine
            view.surfaceCreated(this.getSurfaceHolder());
        } else {
            // update if surface changed when engine wasn't active
            notifySurfaceChanged(engineFormat, engineWidth, engineHeight, false);
        }
        if (visibleEngines == 1)
            app.onResume();
        notifyPreviewState();
        notifyOffsetsChanged();
        if (!Gdx.graphics.isContinuousRendering()) {
            Gdx.graphics.requestRendering();
        }
    }
}
