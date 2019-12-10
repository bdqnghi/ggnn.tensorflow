private String tilesetNameFromTileId(TiledMap map, int tileid) {
    String name = "";
    if (tileid == 0) {
        return "";
    }
    for (TiledMapTileSet tileset : map.getTileSets()) {
        int firstgid = tileset.getProperties().get("firstgid", -1, Integer.class);
        // skip this tileset
        if (firstgid == -1)
            continue;
        if (tileid >= firstgid) {
            name = tileset.getName();
        } else {
            return name;
        }
    }
    return name;
}
