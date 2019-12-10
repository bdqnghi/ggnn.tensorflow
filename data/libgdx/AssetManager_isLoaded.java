/**
 * @param fileName the file name of the asset
 * @return whether the asset is loaded
 */
public synchronized boolean isLoaded(String fileName, Class type) {
    ObjectMap<String, RefCountedContainer> assetsByType = assets.get(type);
    if (assetsByType == null)
        return false;
    RefCountedContainer assetContainer = assetsByType.get(fileName);
    if (assetContainer == null)
        return false;
    return assetContainer.getObject(type) != null;
}
