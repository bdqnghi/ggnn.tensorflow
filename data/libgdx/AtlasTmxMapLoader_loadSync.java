@Override
public TiledMap loadSync(AssetManager manager, String fileName, FileHandle file, AtlasTiledMapLoaderParameters parameter) {
    if (parameter != null) {
        setTextureFilters(parameter.textureMinFilter, parameter.textureMagFilter);
    }
    return map;
}
