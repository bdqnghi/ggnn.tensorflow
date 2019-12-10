@Override
public Array<AssetDescriptor> getDependencies(String fileName, FileHandle atlasFile, TextureAtlasParameter parameter) {
    FileHandle imgDir = atlasFile.parent();
    if (parameter != null)
        data = new TextureAtlasData(atlasFile, imgDir, parameter.flip);
    else {
        data = new TextureAtlasData(atlasFile, imgDir, false);
    }
    Array<AssetDescriptor> dependencies = new Array();
    for (Page page : data.getPages()) {
        TextureParameter params = new TextureParameter();
        params.format = page.format;
        params.genMipMaps = page.useMipMaps;
        params.minFilter = page.minFilter;
        params.magFilter = page.magFilter;
        dependencies.add(new AssetDescriptor(page.textureFile, Texture.class, params));
    }
    return dependencies;
}
