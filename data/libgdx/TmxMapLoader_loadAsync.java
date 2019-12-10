@Override
public void loadAsync(AssetManager manager, String fileName, FileHandle tmxFile, TmxMapLoader.Parameters parameter) {
    map = null;
    if (parameter != null) {
        convertObjectToTileSpace = parameter.convertObjectToTileSpace;
        flipY = parameter.flipY;
    } else {
        convertObjectToTileSpace = false;
        flipY = true;
    }
    try {
        map = loadTilemap(root, tmxFile, new AssetManagerImageResolver(manager));
    } catch (Exception e) {
        throw new GdxRuntimeException("Couldn't load tilemap '" + fileName + "'", e);
    }
}
