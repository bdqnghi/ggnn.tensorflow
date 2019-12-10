private synchronized void injectDependency(String parentAssetFilename, AssetDescriptor dependendAssetDesc) {
    // add the asset as a dependency of the parent asset
    Array<String> dependencies = assetDependencies.get(parentAssetFilename);
    if (dependencies == null) {
        dependencies = new Array();
        assetDependencies.put(parentAssetFilename, dependencies);
    }
    dependencies.add(dependendAssetDesc.fileName);
    // if the asset is already loaded, increase its reference count.
    if (isLoaded(dependendAssetDesc.fileName)) {
        log.debug("Dependency already loaded: " + dependendAssetDesc);
        Class type = assetTypes.get(dependendAssetDesc.fileName);
        RefCountedContainer assetRef = assets.get(type).get(dependendAssetDesc.fileName);
        assetRef.incRefCount();
        incrementRefCountedDependencies(dependendAssetDesc.fileName);
    } else // else add a new task for the asset.
    {
        log.info("Loading dependency: " + dependendAssetDesc);
        addTask(dependendAssetDesc);
    }
}
