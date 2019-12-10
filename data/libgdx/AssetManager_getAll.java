/**
 * @param type the asset type
 * @return all the assets matching the specified type
 */
public synchronized <T> Array<T> getAll(Class<T> type, Array<T> out) {
    ObjectMap<String, RefCountedContainer> assetsByType = assets.get(type);
    if (assetsByType != null) {
        for (ObjectMap.Entry<String, RefCountedContainer> asset : assetsByType.entries()) {
            out.add(asset.value.getObject(type));
        }
    }
    return out;
}
