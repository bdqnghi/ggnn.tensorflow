private void handleAsyncLoader() {
    AsynchronousAssetLoader asyncLoader = (AsynchronousAssetLoader) loader;
    if (!dependenciesLoaded) {
        if (depsFuture == null) {
            depsFuture = executor.submit(this);
        } else {
            if (depsFuture.isDone()) {
                try {
                    depsFuture.get();
                } catch (Exception e) {
                    throw new GdxRuntimeException("Couldn't load dependencies of asset: " + assetDesc.fileName, e);
                }
                dependenciesLoaded = true;
                if (asyncDone) {
                    asset = asyncLoader.loadSync(manager, assetDesc.fileName, resolve(loader, assetDesc), assetDesc.params);
                }
            }
        }
    } else {
        if (loadFuture == null && !asyncDone) {
            loadFuture = executor.submit(this);
        } else {
            if (asyncDone) {
                asset = asyncLoader.loadSync(manager, assetDesc.fileName, resolve(loader, assetDesc), assetDesc.params);
            } else if (loadFuture.isDone()) {
                try {
                    loadFuture.get();
                } catch (Exception e) {
                    throw new GdxRuntimeException("Couldn't load asset: " + assetDesc.fileName, e);
                }
                asset = asyncLoader.loadSync(manager, assetDesc.fileName, resolve(loader, assetDesc), assetDesc.params);
            }
        }
    }
}
