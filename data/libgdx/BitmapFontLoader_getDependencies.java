@Override
public Array<AssetDescriptor> getDependencies(String fileName, FileHandle file, BitmapFontParameter parameter) {
    Array<AssetDescriptor> deps = new Array();
    if (parameter != null && parameter.bitmapFontData != null) {
        data = parameter.bitmapFontData;
        return deps;
    }
    data = new BitmapFontData(file, parameter != null ? parameter.flip : false);
    if (parameter != null && parameter.atlasName != null) {
        deps.add(new AssetDescriptor(parameter.atlasName, TextureAtlas.class));
    } else {
        for (int i = 0; i < data.getImagePaths().length; i++) {
            String path = data.getImagePath(i);
            FileHandle resolved = resolve(path);
            TextureLoader.TextureParameter textureParams = new TextureLoader.TextureParameter();
            if (parameter != null) {
                textureParams.genMipMaps = parameter.genMipMaps;
                textureParams.minFilter = parameter.minFilter;
                textureParams.magFilter = parameter.magFilter;
            }
            AssetDescriptor descriptor = new AssetDescriptor(resolved, Texture.class, textureParams);
            deps.add(descriptor);
        }
    }
    return deps;
}
