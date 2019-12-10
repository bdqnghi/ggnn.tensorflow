// jw: I replaced GL..SurfaceViewLW classes with their original counterparts, if it will work
// on known devices, on opengl 1.0 and 2.0, and all possible SDK versions.. You can remove
// GL..SurfaceViewLW family of classes completely (there is no use for them).
// -> specific for live wallpapers
// jw: synchronized access to current wallpaper surface holder
SurfaceHolder getSurfaceHolder() {
    synchronized (((AndroidLiveWallpaper) app).service.sync) {
        return ((AndroidLiveWallpaper) app).service.getSurfaceHolder();
    }
}
