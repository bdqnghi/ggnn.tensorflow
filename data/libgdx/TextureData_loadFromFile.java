public static TextureData loadFromFile(FileHandle file, Format format, boolean useMipMaps) {
    if (file == null)
        return null;
    if (file.name().endsWith(".cim"))
        return new FileTextureData(file, PixmapIO.readCIM(file), format, useMipMaps);
    if (file.name().endsWith(".etc1"))
        return new ETC1TextureData(file, useMipMaps);
    if (file.name().endsWith(".ktx") || file.name().endsWith(".zktx"))
        return new KTXTextureData(file, useMipMaps);
    return new FileTextureData(file, new Pixmap(file), format, useMipMaps);
}
