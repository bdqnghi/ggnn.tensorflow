/**
 * Expands the view size in each direction, ensuring that tiles of this size or smaller are never culled from the visible
 * portion of the view. Default is 0,0.
 * <p>
 * The amount of tiles cached is computed using <code>(view size + max tile size) * overCache</code>, meaning the max tile size
 * increases the amount cached and possibly {@link #setOverCache(float)} can be reduced.
 * <p>
 * If the view size and {@link #setOverCache(float)} are configured so the size of the cached tiles is always larger than the
 * largest tile size, this setting is not needed.
 */
public void setMaxTileSize(float maxPixelWidth, float maxPixelHeight) {
    this.maxTileWidth = maxPixelWidth;
    this.maxTileHeight = maxPixelHeight;
}
