/**
 * Sets the reference count of an asset.
 * @param fileName
 */
public synchronized void setReferenceCount(String fileName, int refCount) {
    Class type = assetTypes.get(fileName);
    if (type == null)
        throw new GdxRuntimeException("Asset not loaded: " + fileName);
    assets.get(type).get(fileName).setRefCount(refCount);
}
