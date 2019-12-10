private FileHandle resolve(AssetLoader loader, AssetDescriptor assetDesc) {
    if (assetDesc.file == null)
        assetDesc.file = loader.resolve(assetDesc.fileName);
    return assetDesc.file;
}
