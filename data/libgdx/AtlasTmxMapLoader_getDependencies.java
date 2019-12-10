@Override
public Array<AssetDescriptor> getDependencies(String fileName, FileHandle tmxFile, AtlasTiledMapLoaderParameters parameter) {
    Array<AssetDescriptor> dependencies = new Array<AssetDescriptor>();
    try {
        root = xml.parse(tmxFile);
        Element properties = root.getChildByName("properties");
        if (properties != null) {
            for (Element property : properties.getChildrenByName("property")) {
                String name = property.getAttribute("name");
                String value = property.getAttribute("value");
                if (name.startsWith("atlas")) {
                    FileHandle atlasHandle = getRelativeFileHandle(tmxFile, value);
                    dependencies.add(new AssetDescriptor(atlasHandle, TextureAtlas.class));
                }
            }
        }
    } catch (IOException e) {
        throw new GdxRuntimeException("Unable to parse .tmx file.");
    }
    return dependencies;
}
