public Array<AssetDescriptor> getAssetDescriptors() {
    Array<AssetDescriptor> descriptors = new Array<AssetDescriptor>();
    for (AssetData data : sharedAssets) {
        descriptors.add(new AssetDescriptor<T>(data.filename, data.type));
    }
    return descriptors;
}
