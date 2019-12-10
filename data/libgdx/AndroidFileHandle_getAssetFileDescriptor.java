/**
 * @return an AssetFileDescriptor for this file or null if the file is not of type Internal
 * @throws IOException - thrown by AssetManager.openFd()
 */
public AssetFileDescriptor getAssetFileDescriptor() throws IOException {
    return assets != null ? assets.openFd(path()) : null;
}
