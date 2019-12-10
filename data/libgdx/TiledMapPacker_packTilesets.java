/**
 * Traverse the specified tilesets, optionally lookup the used ids and pass every tile image to the {@link TexturePacker},
 * optionally ignoring unused tile ids
 */
private void packTilesets(FileHandle inputDirHandle, Settings texturePackerSettings) throws IOException {
    BufferedImage tile;
    Vector2 tileLocation;
    Graphics g;
    packer = new TexturePacker(texturePackerSettings);
    for (TiledMapTileSet set : tilesetsToPack.values()) {
        String tilesetName = set.getName();
        System.out.println("Processing tileset " + tilesetName);
        IntArray usedIds = this.settings.stripUnusedTiles ? getUsedIdsBucket(tilesetName, -1) : null;
        int tileWidth = set.getProperties().get("tilewidth", Integer.class);
        int tileHeight = set.getProperties().get("tileheight", Integer.class);
        int firstgid = set.getProperties().get("firstgid", Integer.class);
        String imageName = set.getProperties().get("imagesource", String.class);
        TileSetLayout layout = new TileSetLayout(firstgid, set, inputDirHandle);
        for (int gid = layout.firstgid, i = 0; i < layout.numTiles; gid++, i++) {
            boolean verbose = this.settings.verbose;
            if (usedIds != null && !usedIds.contains(gid)) {
                if (verbose) {
                    System.out.println("Stripped id #" + gid + " from tileset \"" + tilesetName + "\"");
                }
                continue;
            }
            tileLocation = layout.getLocation(gid);
            tile = new BufferedImage(tileWidth, tileHeight, BufferedImage.TYPE_4BYTE_ABGR);
            g = tile.createGraphics();
            g.drawImage(layout.image, 0, 0, tileWidth, tileHeight, (int) tileLocation.x, (int) tileLocation.y, (int) tileLocation.x + tileWidth, (int) tileLocation.y + tileHeight, null);
            if (verbose) {
                System.out.println("Adding " + tileWidth + "x" + tileHeight + " (" + (int) tileLocation.x + ", " + (int) tileLocation.y + ")");
            }
            // AtlasTmxMapLoader expects every tileset's index to begin at zero for the first tile in every tileset.
            // so the region's adjusted gid is (gid - layout.firstgid). firstgid will be added back in AtlasTmxMapLoader on load
            int adjustedGid = gid - layout.firstgid;
            final String separator = "_";
            String regionName = tilesetName + separator + adjustedGid;
            packer.addImage(tile, regionName);
        }
    }
    String tilesetOutputDir = outputDir.toString() + "/" + this.settings.tilesetOutputDirectory;
    File relativeTilesetOutputDir = new File(tilesetOutputDir);
    File outputDirTilesets = new File(relativeTilesetOutputDir.getCanonicalPath());
    outputDirTilesets.mkdirs();
    packer.pack(outputDirTilesets, this.settings.atlasOutputName + ".atlas");
}
