/**
 * Returns the reference count of an asset.
 * @param fileName
 */
public synchronized int getReferenceCount(String fileName) {
    Class type = assetTypes.get(fileName);
    if (type == null)
        throw new GdxRuntimeException("Asset not loaded: " + fileName);
    return assets.get(type).get(fileName).getRefCount();
}
