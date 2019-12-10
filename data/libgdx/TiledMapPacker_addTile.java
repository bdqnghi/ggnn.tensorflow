private void addTile(TiledMapTile tile, int bucketSize) {
    int tileid = tile.getId() & ~0xE0000000;
    String tilesetName = tilesetNameFromTileId(map, tileid);
    IntArray usedIds = getUsedIdsBucket(tilesetName, bucketSize);
    usedIds.add(tileid);
    // track this tileset to be packed if not already tracked
    if (!tilesetsToPack.containsKey(tilesetName)) {
        tilesetsToPack.put(tilesetName, map.getTileSets().getTileSet(tilesetName));
    }
}
