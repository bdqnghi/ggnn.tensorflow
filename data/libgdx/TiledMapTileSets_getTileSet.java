/**
 * @param name Name of the {@link TiledMapTileSet} to retrieve.
 * @return tileset with matching name, null if it doesn't exist
 */
public TiledMapTileSet getTileSet(String name) {
    for (TiledMapTileSet tileset : tilesets) {
        if (name.equals(tileset.getName())) {
            return tileset;
        }
    }
    return null;
}
