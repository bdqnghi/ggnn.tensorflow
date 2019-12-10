protected void notifyOffsetsChanged() {
    if (linkedEngine == this && app.listener instanceof AndroidWallpaperListener) {
        if (!offsetsConsumed) {
            // no need for more sophisticated synchronization - offsetsChanged can be called multiple
            // times and with various patterns on various devices - user application must be prepared for that
            offsetsConsumed = true;
            app.postRunnable(new Runnable() {

                @Override
                public void run() {
                    boolean isCurrent = false;
                    synchronized (sync) {
                        // without this app can crash when fast
                        isCurrent = (linkedEngine == AndroidWallpaperEngine.this);
                    // switching between engines (tested!)
                    }
                    if (isCurrent)
                        ((AndroidWallpaperListener) app.listener).offsetChange(xOffset, yOffset, xOffsetStep, yOffsetStep, xPixelOffset, yPixelOffset);
                }
            });
        }
    }
}
