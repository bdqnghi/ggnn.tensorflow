/**
 * Adds a {@link AssetLoadingTask} to the task stack for the given asset.
 * @param assetDesc
 */
private void addTask(AssetDescriptor assetDesc) {
    AssetLoader loader = getLoader(assetDesc.type, assetDesc.fileName);
    if (loader == null)
        throw new GdxRuntimeException("No loader for type: " + ClassReflection.getSimpleName(assetDesc.type));
    tasks.push(new AssetLoadingTask(this, assetDesc, loader, executor));
}
