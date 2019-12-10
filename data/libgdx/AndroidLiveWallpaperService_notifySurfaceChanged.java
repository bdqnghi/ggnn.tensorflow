/**
 * Notifies shared GLSurfaceView about changed surface format.
 * @param format
 * @param width
 * @param height
 * @param forceUpdate if false, surface view will be notified only if currently contains expired information
 */
private void notifySurfaceChanged(final int format, final int width, final int height, boolean forceUpdate) {
    if (!forceUpdate && format == viewFormat && width == viewWidth && height == viewHeight) {
        // skip if didn't changed
        if (DEBUG)
            Log.d(TAG, " > surface is current, skipping surfaceChanged event");
    } else {
        // update engine desired surface format
        engineFormat = format;
        engineWidth = width;
        engineHeight = height;
        // update surface view if engine is linked with it already
        if (linkedEngine == this) {
            viewFormat = engineFormat;
            viewWidth = engineWidth;
            viewHeight = engineHeight;
            view.surfaceChanged(this.getSurfaceHolder(), viewFormat, viewWidth, viewHeight);
        } else {
            if (DEBUG)
                Log.d(TAG, " > engine is not active, skipping surfaceChanged event");
        }
    }
}
