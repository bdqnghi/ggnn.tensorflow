private void processSingleMap(File mapFile, FileHandle dirHandle, Settings texturePackerSettings) throws IOException {
    boolean combineTilesets = this.settings.combineTilesets;
    if (combineTilesets == false) {
        tilesetUsedIds = new HashMap<String, IntArray>();
        tilesetsToPack = new ObjectMap<String, TiledMapTileSet>();
    }
    map = mapLoader.load(mapFile.getCanonicalPath());
    // if enabled, build a list of used tileids for the tileset used by this map
    boolean stripUnusedTiles = this.settings.stripUnusedTiles;
    if (stripUnusedTiles) {
        stripUnusedTiles();
    } else {
        for (TiledMapTileSet tileset : map.getTileSets()) {
            String tilesetName = tileset.getName();
            if (!tilesetsToPack.containsKey(tilesetName)) {
                tilesetsToPack.put(tilesetName, tileset);
            }
        }
    }
    if (combineTilesets == false) {
        FileHandle tmpHandle = new FileHandle(mapFile.getName());
        this.settings.atlasOutputName = tmpHandle.nameWithoutExtension();
        packTilesets(dirHandle, texturePackerSettings);
    }
    FileHandle tmxFile = new FileHandle(mapFile.getCanonicalPath());
    writeUpdatedTMX(map, tmxFile);
}
