@Override
public Array<AssetDescriptor> getDependencies(String fileName, FileHandle file, SkinParameter parameter) {
    Array<AssetDescriptor> deps = new Array();
    if (parameter == null || parameter.textureAtlasPath == null)
        deps.add(new AssetDescriptor(file.pathWithoutExtension() + ".atlas", TextureAtlas.class));
    else if (parameter.textureAtlasPath != null)
        deps.add(new AssetDescriptor(parameter.textureAtlasPath, TextureAtlas.class));
    return deps;
}
