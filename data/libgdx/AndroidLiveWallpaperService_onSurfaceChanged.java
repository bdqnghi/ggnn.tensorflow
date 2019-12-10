/**
 * This is called immediately after any structural changes (format or size) have been made to the surface. You should at
 * this point update the imagery in the surface. This method is always called at least once, after
 * surfaceCreated(SurfaceHolder).
 */
@Override
public void onSurfaceChanged(final SurfaceHolder holder, final int format, final int width, final int height) {
    if (DEBUG)
        Log.d(TAG, " > AndroidWallpaperEngine - onSurfaceChanged() isPreview: " + isPreview() + ", " + hashCode() + ", running: " + engines + ", linked: " + (linkedEngine == this) + ", sufcace valid: " + getSurfaceHolder().getSurface().isValid());
    Log.i(TAG, "engine surface changed");
    super.onSurfaceChanged(holder, format, width, height);
    notifySurfaceChanged(format, width, height, true);
// it shouldn't be required there (as I understand android.service.wallpaper.WallpaperService impl)
// notifyPreviewState();
}
