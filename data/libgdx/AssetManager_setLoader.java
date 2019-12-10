/**
 * Sets a new {@link AssetLoader} for the given type.
 * @param type the type of the asset
 * @param suffix the suffix the filename must have for this loader to be used or null to specify the default loader.
 * @param loader the loader
 */
public synchronized <T, P extends AssetLoaderParameters<T>> void setLoader(Class<T> type, String suffix, AssetLoader<T, P> loader) {
    if (type == null)
        throw new IllegalArgumentException("type cannot be null.");
    if (loader == null)
        throw new IllegalArgumentException("loader cannot be null.");
    log.debug("Loader set: " + ClassReflection.getSimpleName(type) + " -> " + ClassReflection.getSimpleName(loader.getClass()));
    ObjectMap<String, AssetLoader> loaders = this.loaders.get(type);
    if (loaders == null)
        this.loaders.put(type, loaders = new ObjectMap<String, AssetLoader>());
    loaders.put(suffix == null ? "" : suffix, loader);
}
