/**
 * @param asset the asset
 * @return the filename of the asset or null
 */
public synchronized <T> String getAssetFileName(T asset) {
    for (Class assetType : assets.keys()) {
        ObjectMap<String, RefCountedContainer> typedAssets = assets.get(assetType);
        for (String fileName : typedAssets.keys()) {
            T otherAsset = (T) typedAssets.get(fileName).getObject(Object.class);
            if (otherAsset == asset || asset.equals(otherAsset))
                return fileName;
        }
    }
    return null;
}
