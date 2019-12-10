/**
 * @param assetDescriptor the asset descriptor
 * @return the asset
 */
public synchronized <T> T get(AssetDescriptor<T> assetDescriptor) {
    return get(assetDescriptor.fileName, assetDescriptor.type);
}
