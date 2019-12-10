private void handleSyncLoader() {
    SynchronousAssetLoader syncLoader = (SynchronousAssetLoader) loader;
    if (!dependenciesLoaded) {
        dependenciesLoaded = true;
        dependencies = syncLoader.getDependencies(assetDesc.fileName, resolve(loader, assetDesc), assetDesc.params);
        if (dependencies == null) {
            asset = syncLoader.load(manager, assetDesc.fileName, resolve(loader, assetDesc), assetDesc.params);
            return;
        }
        removeDuplicates(dependencies);
        manager.injectDependencies(assetDesc.fileName, dependencies);
    } else {
        asset = syncLoader.load(manager, assetDesc.fileName, resolve(loader, assetDesc), assetDesc.params);
    }
}
