@Override
public AssetType getType(String file) {
    String extension = extension(file).toLowerCase();
    if (isImage(extension))
        return AssetType.Image;
    if (isAudio(extension))
        return AssetType.Audio;
    if (isText(extension))
        return AssetType.Text;
    return AssetType.Binary;
}
