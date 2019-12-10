@Override
public void loadAsync(AssetManager manager, String fileName, FileHandle tmxFile, AtlasTiledMapLoaderParameters parameter) {
    map = null;
    if (parameter != null) {
        convertObjectToTileSpace = parameter.convertObjectToTileSpace;
        flipY = parameter.flipY;
    } else {
        convertObjectToTileSpace = false;
        flipY = true;
    }
    try {
        map = loadMap(root, tmxFile, new AtlasResolver.AssetManagerAtlasResolver(manager));
    } catch (Exception e) {
        throw new GdxRuntimeException("Couldn't load tilemap '" + fileName + "'", e);
    }
}
