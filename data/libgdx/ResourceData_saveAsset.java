public <K> void saveAsset(String filename, Class<K> type) {
    int i = resources.getAssetData(filename, type);
    if (i == -1) {
        resources.sharedAssets.add(new AssetData(filename, type));
        i = resources.sharedAssets.size - 1;
    }
    assets.add(i);
}
