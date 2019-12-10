/**
 * Removes a task from the loadQueue and adds it to the task stack. If the asset is already loaded (which can happen if it was
 * a dependency of a previously loaded asset) its reference count will be increased.
 */
private void nextTask() {
    AssetDescriptor assetDesc = loadQueue.removeIndex(0);
    // if the asset not meant to be reloaded and is already loaded, increase its reference count
    if (isLoaded(assetDesc.fileName)) {
        log.debug("Already loaded: " + assetDesc);
        Class type = assetTypes.get(assetDesc.fileName);
        RefCountedContainer assetRef = assets.get(type).get(assetDesc.fileName);
        assetRef.incRefCount();
        incrementRefCountedDependencies(assetDesc.fileName);
        if (assetDesc.params != null && assetDesc.params.loadedCallback != null) {
            assetDesc.params.loadedCallback.finishedLoading(this, assetDesc.fileName, assetDesc.type);
        }
        loaded++;
    } else {
        // else add a new task for the asset.
        log.info("Loading: " + assetDesc);
        addTask(assetDesc);
    }
}
