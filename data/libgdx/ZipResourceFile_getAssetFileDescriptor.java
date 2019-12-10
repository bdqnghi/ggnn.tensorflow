/**
 * getAssetFileDescriptor allows for ZipResourceFile to directly feed
 * Android API's that want an fd, offset, and length such as the
 * MediaPlayer. It also allows for the class to be used in a content
 * provider that can feed video players. The file must be stored
 * (non-compressed) in the Zip file for this to work.
 *
 * @param assetPath
 * @return the asset file descriptor for the file, or null if the file isn't
 *         present or is stored compressed
 */
public AssetFileDescriptor getAssetFileDescriptor(String assetPath) {
    ZipEntryRO entry = mHashMap.get(assetPath);
    if (null != entry) {
        return entry.getAssetFileDescriptor();
    }
    return null;
}
