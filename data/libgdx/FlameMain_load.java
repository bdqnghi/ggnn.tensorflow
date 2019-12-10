public <T> T load(String resource, Class<T> type, AssetLoader loader, AssetLoaderParameters<T> params) {
    String resolvedPath = new String(resource).replaceAll("\\\\", "/");
    boolean exist = assetManager.isLoaded(resolvedPath, type);
    T oldAsset = null;
    if (exist) {
        oldAsset = assetManager.get(resolvedPath, type);
        for (int i = assetManager.getReferenceCount(resolvedPath); i > 0; --i) assetManager.unload(resolvedPath);
    }
    AssetLoader<T, AssetLoaderParameters<T>> currentLoader = assetManager.getLoader(type);
    if (loader != null)
        assetManager.setLoader(type, loader);
    assetManager.load(resource, type, params);
    assetManager.finishLoading();
    T res = assetManager.get(resolvedPath);
    if (currentLoader != null)
        assetManager.setLoader(type, currentLoader);
    if (exist)
        EventManager.get().fire(EVT_ASSET_RELOADED, new Object[] { oldAsset, res });
    return res;
}
