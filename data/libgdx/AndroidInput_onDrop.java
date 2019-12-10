/**
 * Called in {@link AndroidLiveWallpaperService} on drop
 * @param x
 * @param y
 */
public void onDrop(int x, int y) {
    postTap(x, y);
}
