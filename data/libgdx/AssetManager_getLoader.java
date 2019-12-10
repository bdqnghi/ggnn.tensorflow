/**
 * Returns the loader for the given type and the specified filename. If no loader exists for the specific filename, the default
 * loader for that type is returned.
 * @param type The type of the loader to get
 * @param fileName The filename of the asset to get a loader for, or null to get the default loader
 * @return The loader capable of loading the type and filename, or null if none exists
 */
public <T> AssetLoader getLoader(final Class<T> type, final String fileName) {
    final ObjectMap<String, AssetLoader> loaders = this.loaders.get(type);
    if (loaders == null || loaders.size < 1)
        return null;
    if (fileName == null)
        return loaders.get("");
    AssetLoader result = null;
    int l = -1;
    for (ObjectMap.Entry<String, AssetLoader> entry : loaders.entries()) {
        if (entry.key.length() > l && fileName.endsWith(entry.key)) {
            result = entry.value;
            l = entry.key.length();
        }
    }
    return result;
}
