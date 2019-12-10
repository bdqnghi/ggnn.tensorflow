/**
 * Called to inform you of the wallpaper becoming visible or hidden. It is very important that a wallpaper only use CPU
 * while it is visible..
 */
@Override
public void onVisibilityChanged(final boolean visible) {
    boolean reportedVisible = isVisible();
    if (DEBUG)
        Log.d(TAG, " > AndroidWallpaperEngine - onVisibilityChanged(paramVisible: " + visible + " reportedVisible: " + reportedVisible + ") " + hashCode() + ", sufcace valid: " + getSurfaceHolder().getSurface().isValid());
    super.onVisibilityChanged(visible);
    // onSurfaceChanged when they aren't visible, it can cause problems in current implementation and it is not necessary
    if (reportedVisible == false && visible == true) {
        if (DEBUG)
            Log.d(TAG, " > fake visibilityChanged event! Android WallpaperService likes do that!");
        return;
    }
    notifyVisibilityChanged(visible);
}
