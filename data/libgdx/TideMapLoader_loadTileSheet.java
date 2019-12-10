private void loadTileSheet(TiledMap map, Element element, FileHandle tideFile, ImageResolver imageResolver) {
    if (element.getName().equals("TileSheet")) {
        String id = element.getAttribute("Id");
        String description = element.getChildByName("Description").getText();
        String imageSource = element.getChildByName("ImageSource").getText();
        Element alignment = element.getChildByName("Alignment");
        String sheetSize = alignment.getAttribute("SheetSize");
        String tileSize = alignment.getAttribute("TileSize");
        String margin = alignment.getAttribute("Margin");
        String spacing = alignment.getAttribute("Spacing");
        String[] sheetSizeParts = sheetSize.split(" x ");
        int sheetSizeX = Integer.parseInt(sheetSizeParts[0]);
        int sheetSizeY = Integer.parseInt(sheetSizeParts[1]);
        String[] tileSizeParts = tileSize.split(" x ");
        int tileSizeX = Integer.parseInt(tileSizeParts[0]);
        int tileSizeY = Integer.parseInt(tileSizeParts[1]);
        String[] marginParts = margin.split(" x ");
        int marginX = Integer.parseInt(marginParts[0]);
        int marginY = Integer.parseInt(marginParts[1]);
        String[] spacingParts = margin.split(" x ");
        int spacingX = Integer.parseInt(spacingParts[0]);
        int spacingY = Integer.parseInt(spacingParts[1]);
        FileHandle image = getRelativeFileHandle(tideFile, imageSource);
        TextureRegion texture = imageResolver.getImage(image.path());
        TiledMapTileSets tilesets = map.getTileSets();
        int firstgid = 1;
        for (TiledMapTileSet tileset : tilesets) {
            firstgid += tileset.size();
        }
        TiledMapTileSet tileset = new TiledMapTileSet();
        tileset.setName(id);
        tileset.getProperties().put("firstgid", firstgid);
        int gid = firstgid;
        int stopWidth = texture.getRegionWidth() - tileSizeX;
        int stopHeight = texture.getRegionHeight() - tileSizeY;
        for (int y = marginY; y <= stopHeight; y += tileSizeY + spacingY) {
            for (int x = marginX; x <= stopWidth; x += tileSizeX + spacingX) {
                TiledMapTile tile = new StaticTiledMapTile(new TextureRegion(texture, x, y, tileSizeX, tileSizeY));
                tile.setId(gid);
                tileset.putTile(gid++, tile);
            }
        }
        Element properties = element.getChildByName("Properties");
        if (properties != null) {
            loadProperties(tileset.getProperties(), properties);
        }
        tilesets.addTileSet(tileset);
    }
}
