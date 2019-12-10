/**
 * Adds or replaces tile with that id
 *
 * @param id the id of the {@link TiledMapTile} to add or replace.
 * @param tile the {@link TiledMapTile} to add or replace.
 */
public void putTile(int id, TiledMapTile tile) {
    tiles.put(id, tile);
}
