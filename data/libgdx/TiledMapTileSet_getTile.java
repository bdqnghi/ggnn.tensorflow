/**
 * Gets the {@link TiledMapTile} that has the given id.
 *
 * @param id the id of the {@link TiledMapTile} to retrieve.
 * @return tile matching id, null if it doesn't exist
 */
public TiledMapTile getTile(int id) {
    return tiles.get(id);
}
