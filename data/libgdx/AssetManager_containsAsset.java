/**
 * @param asset the asset
 * @return whether the asset is contained in this manager
 */
public synchronized <T> boolean containsAsset(T asset) {
    ObjectMap<String, RefCountedContainer> typedAssets = assets.get(asset.getClass());
    if (typedAssets == null)
        return false;
    for (String fileName : typedAssets.keys()) {
        T otherAsset = (T) typedAssets.get(fileName).getObject(Object.class);
        if (otherAsset == asset || asset.equals(otherAsset))
            return true;
    }
    return false;
}
