/**
 * Removes the asset and all its dependencies, if they are not used by other assets.
 * @param fileName the file name
 */
public synchronized void unload(String fileName) {
    // and cancel if necessary
    if (tasks.size() > 0) {
        AssetLoadingTask currAsset = tasks.firstElement();
        if (currAsset.assetDesc.fileName.equals(fileName)) {
            currAsset.cancel = true;
            log.debug("Unload (from tasks): " + fileName);
            return;
        }
    }
    // check if it's in the queue
    int foundIndex = -1;
    for (int i = 0; i < loadQueue.size; i++) {
        if (loadQueue.get(i).fileName.equals(fileName)) {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1) {
        toLoad--;
        loadQueue.removeIndex(foundIndex);
        log.debug("Unload (from queue): " + fileName);
        return;
    }
    // get the asset and its type
    Class type = assetTypes.get(fileName);
    if (type == null)
        throw new GdxRuntimeException("Asset not loaded: " + fileName);
    RefCountedContainer assetRef = assets.get(type).get(fileName);
    // if it is reference counted, decrement ref count and check if we can really get rid of it.
    assetRef.decRefCount();
    if (assetRef.getRefCount() <= 0) {
        log.debug("Unload (dispose): " + fileName);
        // if it is disposable dispose it
        if (assetRef.getObject(Object.class) instanceof Disposable)
            ((Disposable) assetRef.getObject(Object.class)).dispose();
        // remove the asset from the manager.
        assetTypes.remove(fileName);
        assets.get(type).remove(fileName);
    } else {
        log.debug("Unload (decrement): " + fileName);
    }
    // remove any dependencies (or just decrement their ref count).
    Array<String> dependencies = assetDependencies.get(fileName);
    if (dependencies != null) {
        for (String dependency : dependencies) {
            if (isLoaded(dependency))
                unload(dependency);
        }
    }
    // remove dependencies if ref count < 0
    if (assetRef.getRefCount() <= 0) {
        assetDependencies.remove(fileName);
    }
}
