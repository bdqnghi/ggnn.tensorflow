/**
 * Loads the {@link TiledMap} from the given file. The file is resolved via the {@link FileHandleResolver} set in the
 * constructor of this class. By default it will resolve to an internal file.
 * @param fileName the filename
 * @param parameters specifies whether to use y-up, generate mip maps etc.
 * @return the TiledMap
 */
public TiledMap load(String fileName, TmxMapLoader.Parameters parameters) {
    try {
        this.convertObjectToTileSpace = parameters.convertObjectToTileSpace;
        this.flipY = parameters.flipY;
        FileHandle tmxFile = resolve(fileName);
        root = xml.parse(tmxFile);
        ObjectMap<String, Texture> textures = new ObjectMap<String, Texture>();
        Array<FileHandle> textureFiles = loadTilesets(root, tmxFile);
        textureFiles.addAll(loadImages(root, tmxFile));
        for (FileHandle textureFile : textureFiles) {
            Texture texture = new Texture(textureFile, parameters.generateMipMaps);
            texture.setFilter(parameters.textureMinFilter, parameters.textureMagFilter);
            textures.put(textureFile.path(), texture);
        }
        DirectImageResolver imageResolver = new DirectImageResolver(textures);
        TiledMap map = loadTilemap(root, tmxFile, imageResolver);
        map.setOwnedResources(textures.values().toArray());
        return map;
    } catch (IOException e) {
        throw new GdxRuntimeException("Couldn't load tilemap '" + fileName + "'", e);
    }
}
