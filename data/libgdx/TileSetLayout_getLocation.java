/**
 * Returns the location of the tile in {@link TileSetLayout#image}
 */
public Vector2 getLocation(int tile) {
    return imageTilePositions.get(tile - firstgid);
}
