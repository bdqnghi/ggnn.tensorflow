protected void loadTileset(TiledMap map, Element element, FileHandle tmxFile, AtlasResolver resolver) {
    if (element.getName().equals("tileset")) {
        String name = element.get("name", null);
        int firstgid = element.getIntAttribute("firstgid", 1);
        int tilewidth = element.getIntAttribute("tilewidth", 0);
        int tileheight = element.getIntAttribute("tileheight", 0);
        int spacing = element.getIntAttribute("spacing", 0);
        int margin = element.getIntAttribute("margin", 0);
        String source = element.getAttribute("source", null);
        int offsetX = 0;
        int offsetY = 0;
        String imageSource = "";
        int imageWidth = 0, imageHeight = 0;
        FileHandle image = null;
        if (source != null) {
            FileHandle tsx = getRelativeFileHandle(tmxFile, source);
            try {
                element = xml.parse(tsx);
                name = element.get("name", null);
                tilewidth = element.getIntAttribute("tilewidth", 0);
                tileheight = element.getIntAttribute("tileheight", 0);
                spacing = element.getIntAttribute("spacing", 0);
                margin = element.getIntAttribute("margin", 0);
                Element offset = element.getChildByName("tileoffset");
                if (offset != null) {
                    offsetX = offset.getIntAttribute("x", 0);
                    offsetY = offset.getIntAttribute("y", 0);
                }
                Element imageElement = element.getChildByName("image");
                if (imageElement != null) {
                    imageSource = imageElement.getAttribute("source");
                    imageWidth = imageElement.getIntAttribute("width", 0);
                    imageHeight = imageElement.getIntAttribute("height", 0);
                    image = getRelativeFileHandle(tsx, imageSource);
                }
            } catch (IOException e) {
                throw new GdxRuntimeException("Error parsing external tileset.");
            }
        } else {
            Element offset = element.getChildByName("tileoffset");
            if (offset != null) {
                offsetX = offset.getIntAttribute("x", 0);
                offsetY = offset.getIntAttribute("y", 0);
            }
            Element imageElement = element.getChildByName("image");
            if (imageElement != null) {
                imageSource = imageElement.getAttribute("source");
                imageWidth = imageElement.getIntAttribute("width", 0);
                imageHeight = imageElement.getIntAttribute("height", 0);
                image = getRelativeFileHandle(tmxFile, imageSource);
            }
        }
        String atlasFilePath = map.getProperties().get("atlas", String.class);
        if (atlasFilePath == null) {
            FileHandle atlasFile = tmxFile.sibling(tmxFile.nameWithoutExtension() + ".atlas");
            if (atlasFile.exists())
                atlasFilePath = atlasFile.name();
        }
        if (atlasFilePath == null) {
            throw new GdxRuntimeException("The map is missing the 'atlas' property");
        }
        // get the TextureAtlas for this tileset
        FileHandle atlasHandle = getRelativeFileHandle(tmxFile, atlasFilePath);
        atlasHandle = resolve(atlasHandle.path());
        TextureAtlas atlas = resolver.getAtlas(atlasHandle.path());
        String regionsName = name;
        for (Texture texture : atlas.getTextures()) {
            trackedTextures.add(texture);
        }
        TiledMapTileSet tileset = new TiledMapTileSet();
        MapProperties props = tileset.getProperties();
        tileset.setName(name);
        props.put("firstgid", firstgid);
        props.put("imagesource", imageSource);
        props.put("imagewidth", imageWidth);
        props.put("imageheight", imageHeight);
        props.put("tilewidth", tilewidth);
        props.put("tileheight", tileheight);
        props.put("margin", margin);
        props.put("spacing", spacing);
        if (imageSource != null && imageSource.length() > 0) {
            int lastgid = firstgid + ((imageWidth / tilewidth) * (imageHeight / tileheight)) - 1;
            for (AtlasRegion region : atlas.findRegions(regionsName)) {
                // handle unused tile ids
                if (region != null) {
                    int tileid = region.index + 1;
                    if (tileid >= firstgid && tileid <= lastgid) {
                        StaticTiledMapTile tile = new StaticTiledMapTile(region);
                        tile.setId(tileid);
                        tile.setOffsetX(offsetX);
                        tile.setOffsetY(flipY ? -offsetY : offsetY);
                        tileset.putTile(tileid, tile);
                    }
                }
            }
        }
        for (Element tileElement : element.getChildrenByName("tile")) {
            int tileid = firstgid + tileElement.getIntAttribute("id", 0);
            TiledMapTile tile = tileset.getTile(tileid);
            if (tile == null) {
                Element imageElement = tileElement.getChildByName("image");
                if (imageElement != null) {
                    // Is a tilemap with individual images.
                    String regionName = imageElement.getAttribute("source");
                    regionName = regionName.substring(0, regionName.lastIndexOf('.'));
                    AtlasRegion region = atlas.findRegion(regionName);
                    if (region == null)
                        throw new GdxRuntimeException("Tileset region not found: " + regionName);
                    tile = new StaticTiledMapTile(region);
                    tile.setId(tileid);
                    tile.setOffsetX(offsetX);
                    tile.setOffsetY(flipY ? -offsetY : offsetY);
                    tileset.putTile(tileid, tile);
                }
            }
            if (tile != null) {
                String terrain = tileElement.getAttribute("terrain", null);
                if (terrain != null) {
                    tile.getProperties().put("terrain", terrain);
                }
                String probability = tileElement.getAttribute("probability", null);
                if (probability != null) {
                    tile.getProperties().put("probability", probability);
                }
                Element properties = tileElement.getChildByName("properties");
                if (properties != null) {
                    loadProperties(tile.getProperties(), properties);
                }
            }
        }
        Array<Element> tileElements = element.getChildrenByName("tile");
        Array<AnimatedTiledMapTile> animatedTiles = new Array<AnimatedTiledMapTile>();
        for (Element tileElement : tileElements) {
            int localtid = tileElement.getIntAttribute("id", 0);
            TiledMapTile tile = tileset.getTile(firstgid + localtid);
            if (tile != null) {
                Element animationElement = tileElement.getChildByName("animation");
                if (animationElement != null) {
                    Array<StaticTiledMapTile> staticTiles = new Array<StaticTiledMapTile>();
                    IntArray intervals = new IntArray();
                    for (Element frameElement : animationElement.getChildrenByName("frame")) {
                        staticTiles.add((StaticTiledMapTile) tileset.getTile(firstgid + frameElement.getIntAttribute("tileid")));
                        intervals.add(frameElement.getIntAttribute("duration"));
                    }
                    AnimatedTiledMapTile animatedTile = new AnimatedTiledMapTile(intervals, staticTiles);
                    animatedTile.setId(tile.getId());
                    animatedTiles.add(animatedTile);
                    tile = animatedTile;
                }
                String terrain = tileElement.getAttribute("terrain", null);
                if (terrain != null) {
                    tile.getProperties().put("terrain", terrain);
                }
                String probability = tileElement.getAttribute("probability", null);
                if (probability != null) {
                    tile.getProperties().put("probability", probability);
                }
                Element properties = tileElement.getChildByName("properties");
                if (properties != null) {
                    loadProperties(tile.getProperties(), properties);
                }
            }
        }
        for (AnimatedTiledMapTile tile : animatedTiles) {
            tileset.putTile(tile.getId(), tile);
        }
        Element properties = element.getChildByName("properties");
        if (properties != null) {
            loadProperties(tileset.getProperties(), properties);
        }
        map.getTileSets().addTileSet(tileset);
    }
}
