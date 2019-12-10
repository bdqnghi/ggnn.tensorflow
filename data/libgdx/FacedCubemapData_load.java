/**
 * Sets the specified side of this cubemap to the specified {@link Pixmap}, overwriting any previous data set to that side.
 * Note that you need to reload through {@link Cubemap#load(CubemapData)} any cubemap using this data for the change to be
 * taken in account.
 * @param side The {@link CubemapSide}
 * @param pixmap The {@link Pixmap}
 */
public void load(CubemapSide side, Pixmap pixmap) {
    data[side.index] = pixmap == null ? null : new PixmapTextureData(pixmap, null, false, false);
}
