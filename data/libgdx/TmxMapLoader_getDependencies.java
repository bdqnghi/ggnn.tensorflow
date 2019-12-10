/**
 * Retrieves TiledMap resource dependencies
 *
 * @param fileName
 * @param parameter not used for now
 * @return dependencies for the given .tmx file
 */
@Override
public Array<AssetDescriptor> getDependencies(String fileName, FileHandle tmxFile, Parameters parameter) {
    Array<AssetDescriptor> dependencies = new Array<AssetDescriptor>();
    try {
        root = xml.parse(tmxFile);
        boolean generateMipMaps = (parameter != null ? parameter.generateMipMaps : false);
        TextureLoader.TextureParameter texParams = new TextureParameter();
        texParams.genMipMaps = generateMipMaps;
        if (parameter != null) {
            texParams.minFilter = parameter.textureMinFilter;
            texParams.magFilter = parameter.textureMagFilter;
        }
        for (FileHandle image : loadTilesets(root, tmxFile)) {
            dependencies.add(new AssetDescriptor(image, Texture.class, texParams));
        }
        for (FileHandle image : loadImages(root, tmxFile)) {
            dependencies.add(new AssetDescriptor(image, Texture.class, texParams));
        }
        return dependencies;
    } catch (IOException e) {
        throw new GdxRuntimeException("Couldn't load tilemap '" + fileName + "'", e);
    }
}
