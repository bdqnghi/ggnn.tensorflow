/**
 * @return the type of a loaded asset.
 */
public synchronized Class getAssetType(String fileName) {
    return assetTypes.get(fileName);
}
