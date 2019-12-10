/**
 * Helper function to create tiles out of the given {@link Texture} starting from the top left corner going to the right and
 * ending at the bottom right corner. Only complete tiles will be returned so if the texture's width or height are not a
 * multiple of the tile width and height not all of the texture will be used.
 *
 * @param texture the Texture
 * @param tileWidth a tile's width in pixels
 * @param tileHeight a tile's height in pixels
 * @return a 2D array of TextureRegions indexed by [row][column].
 */
public static TextureRegion[][] split(Texture texture, int tileWidth, int tileHeight) {
    TextureRegion region = new TextureRegion(texture);
    return region.split(tileWidth, tileHeight);
}
