/**
 * @return the file names of all loaded assets.
 */
public synchronized Array<String> getAssetNames() {
    return assetTypes.keys().toArray();
}
