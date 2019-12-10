public TiledMap load(String fileName, AtlasTiledMapLoaderParameters parameter) {
    try {
        if (parameter != null) {
            convertObjectToTileSpace = parameter.convertObjectToTileSpace;
            flipY = parameter.flipY;
        } else {
            convertObjectToTileSpace = false;
            flipY = true;
        }
        FileHandle tmxFile = resolve(fileName);
        root = xml.parse(tmxFile);
        ObjectMap<String, TextureAtlas> atlases = new ObjectMap<String, TextureAtlas>();
        FileHandle atlasFile = loadAtlas(root, tmxFile);
        if (atlasFile == null) {
            throw new GdxRuntimeException("Couldn't load atlas");
        }
        TextureAtlas atlas = new TextureAtlas(atlasFile);
        atlases.put(atlasFile.path(), atlas);
        AtlasResolver.DirectAtlasResolver atlasResolver = new AtlasResolver.DirectAtlasResolver(atlases);
        TiledMap map = loadMap(root, tmxFile, atlasResolver);
        map.setOwnedResources(atlases.values().toArray());
        setTextureFilters(parameter.textureMinFilter, parameter.textureMagFilter);
        return map;
    } catch (IOException e) {
        throw new GdxRuntimeException("Couldn't load tilemap '" + fileName + "'", e);
    }
}
