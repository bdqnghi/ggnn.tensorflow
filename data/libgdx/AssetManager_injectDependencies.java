synchronized void injectDependencies(String parentAssetFilename, Array<AssetDescriptor> dependendAssetDescs) {
    ObjectSet<String> injected = this.injected;
    for (AssetDescriptor desc : dependendAssetDescs) {
        // Ignore subsequent dependencies if there are duplicates.
        if (injected.contains(desc.fileName))
            continue;
        injected.add(desc.fileName);
        injectDependency(parentAssetFilename, desc);
    }
    injected.clear();
}
