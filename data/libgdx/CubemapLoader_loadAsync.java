@Override
public void loadAsync(AssetManager manager, String fileName, FileHandle file, CubemapParameter parameter) {
    info.filename = fileName;
    if (parameter == null || parameter.cubemapData == null) {
        Pixmap pixmap = null;
        Format format = null;
        boolean genMipMaps = false;
        info.cubemap = null;
        if (parameter != null) {
            format = parameter.format;
            info.cubemap = parameter.cubemap;
        }
        if (fileName.contains(".ktx") || fileName.contains(".zktx")) {
            info.data = new KTXTextureData(file, genMipMaps);
        }
    } else {
        info.data = parameter.cubemapData;
        info.cubemap = parameter.cubemap;
    }
    if (!info.data.isPrepared())
        info.data.prepare();
}
