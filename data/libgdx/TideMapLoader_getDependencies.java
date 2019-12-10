@Override
public Array<AssetDescriptor> getDependencies(String fileName, FileHandle tmxFile, Parameters parameter) {
    Array<AssetDescriptor> dependencies = new Array<AssetDescriptor>();
    try {
        root = xml.parse(tmxFile);
        for (FileHandle image : loadTileSheets(root, tmxFile)) {
            dependencies.add(new AssetDescriptor(image.path(), Texture.class));
        }
        return dependencies;
    } catch (IOException e) {
        throw new GdxRuntimeException("Couldn't load tilemap '" + fileName + "'", e);
    }
}
