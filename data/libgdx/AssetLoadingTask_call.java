/**
 * Loads parts of the asset asynchronously if the loader is an {@link AsynchronousAssetLoader}.
 */
@Override
public Void call() throws Exception {
    AsynchronousAssetLoader asyncLoader = (AsynchronousAssetLoader) loader;
    if (dependenciesLoaded == false) {
        dependencies = asyncLoader.getDependencies(assetDesc.fileName, resolve(loader, assetDesc), assetDesc.params);
        if (dependencies != null) {
            removeDuplicates(dependencies);
            manager.injectDependencies(assetDesc.fileName, dependencies);
        } else {
            // if we have no dependencies, we load the async part of the task immediately.
            asyncLoader.loadAsync(manager, assetDesc.fileName, resolve(loader, assetDesc), assetDesc.params);
            asyncDone = true;
        }
    } else {
        asyncLoader.loadAsync(manager, assetDesc.fileName, resolve(loader, assetDesc), assetDesc.params);
    }
    return null;
}
