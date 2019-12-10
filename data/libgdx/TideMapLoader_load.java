@Override
public TiledMap load(AssetManager assetManager, String fileName, FileHandle tideFile, Parameters parameter) {
    try {
        return loadMap(root, tideFile, new AssetManagerImageResolver(assetManager));
    } catch (Exception e) {
        throw new GdxRuntimeException("Couldn't load tilemap '" + fileName + "'", e);
    }
}
