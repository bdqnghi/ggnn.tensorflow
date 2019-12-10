/**
 * Updates the loading of the asset. In case the asset is loaded with an {@link AsynchronousAssetLoader}, the loaders
 * {@link AsynchronousAssetLoader#loadAsync(AssetManager, String, FileHandle, AssetLoaderParameters)} method is first called on
 * a worker thread. Once this method returns, the rest of the asset is loaded on the rendering thread via
 * {@link AsynchronousAssetLoader#loadSync(AssetManager, String, FileHandle, AssetLoaderParameters)}.
 * @return true in case the asset was fully loaded, false otherwise
 * @throws GdxRuntimeException
 */
public boolean update() {
    ticks++;
    if (loader instanceof SynchronousAssetLoader) {
        handleSyncLoader();
    } else {
        handleAsyncLoader();
    }
    return asset != null;
}
