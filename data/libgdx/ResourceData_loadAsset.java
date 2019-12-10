public AssetDescriptor loadAsset() {
    if (loadIndex == assets.size)
        return null;
    AssetData data = (AssetData) resources.sharedAssets.get(assets.get(loadIndex++));
    return new AssetDescriptor(data.filename, data.type);
}
