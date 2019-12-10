@Override
public void loadAsync(AssetManager manager, String fileName, FileHandle file, TextureParameter parameter) {
    info.filename = fileName;
    if (parameter == null || parameter.textureData == null) {
        Pixmap pixmap = null;
        Format format = null;
        boolean genMipMaps = false;
        info.texture = null;
        if (parameter != null) {
            format = parameter.format;
            genMipMaps = parameter.genMipMaps;
            info.texture = parameter.texture;
        }
        info.data = TextureData.Factory.loadFromFile(file, format, genMipMaps);
    } else {
        info.data = parameter.textureData;
        info.texture = parameter.texture;
    }
    if (!info.data.isPrepared())
        info.data.prepare();
}
