/**
 * Adds the given asset to the loading queue of the AssetManager.
 * @param desc the {@link AssetDescriptor}
 */
public synchronized void load(AssetDescriptor desc) {
    load(desc.fileName, desc.type, desc.params);
}
