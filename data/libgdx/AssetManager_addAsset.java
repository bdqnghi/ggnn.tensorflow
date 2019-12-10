/**
 * Adds an asset to this AssetManager
 */
protected <T> void addAsset(final String fileName, Class<T> type, T asset) {
    // add the asset to the filename lookup
    assetTypes.put(fileName, type);
    // add the asset to the type lookup
    ObjectMap<String, RefCountedContainer> typeToAssets = assets.get(type);
    if (typeToAssets == null) {
        typeToAssets = new ObjectMap<String, RefCountedContainer>();
        assets.put(type, typeToAssets);
    }
    typeToAssets.put(fileName, new RefCountedContainer(asset));
}
