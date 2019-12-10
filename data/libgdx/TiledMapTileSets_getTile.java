/**
 * @param id id of the {@link TiledMapTile} to get.
 * @return tile with matching id, null if it doesn't exist
 */
public TiledMapTile getTile(int id) {
    // See TiledMapModifiedExternalTilesetTest for example of this issue.
    for (int i = tilesets.size - 1; i >= 0; i--) {
        TiledMapTileSet tileset = tilesets.get(i);
        TiledMapTile tile = tileset.getTile(id);
        if (tile != null) {
            return tile;
        }
    }
    return null;
}
