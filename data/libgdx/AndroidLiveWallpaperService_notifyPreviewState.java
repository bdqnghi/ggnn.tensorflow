protected void notifyPreviewState() {
    // notify preview state to app listener
    if (linkedEngine == this && app.listener instanceof AndroidWallpaperListener) {
        final boolean currentPreviewState = linkedEngine.isPreview();
        app.postRunnable(new Runnable() {

            @Override
            public void run() {
                boolean shouldNotify = false;
                synchronized (sync) {
                    if (!isPreviewNotified || notifiedPreviewState != currentPreviewState) {
                        notifiedPreviewState = currentPreviewState;
                        isPreviewNotified = true;
                        shouldNotify = true;
                    }
                }
                if (shouldNotify) {
                    // without this app can crash when fast switching between engines
                    AndroidLiveWallpaper currentApp = app;
                    // (tested!)
                    if (currentApp != null)
                        ((AndroidWallpaperListener) currentApp.listener).previewStateChange(currentPreviewState);
                }
            }
        });
    }
}
