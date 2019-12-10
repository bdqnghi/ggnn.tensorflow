@Override
protected void logManagedCachesStatus() {
    // to prevent creating too many string buffers in live wallpapers
    if (AndroidLiveWallpaperService.DEBUG) {
        super.logManagedCachesStatus();
    }
}
