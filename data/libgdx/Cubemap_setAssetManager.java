/**
 * Sets the {@link AssetManager}. When the context is lost, cubemaps managed by the asset manager are reloaded by the manager
 * on a separate thread (provided that a suitable {@link AssetLoader} is registered with the manager). Cubemaps not managed by
 * the AssetManager are reloaded via the usual means on the rendering thread.
 * @param manager the asset manager.
 */
public static void setAssetManager(AssetManager manager) {
    Cubemap.assetManager = manager;
}
