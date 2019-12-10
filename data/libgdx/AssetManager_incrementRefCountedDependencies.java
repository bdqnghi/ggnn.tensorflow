private void incrementRefCountedDependencies(String parent) {
    Array<String> dependencies = assetDependencies.get(parent);
    if (dependencies == null)
        return;
    for (String dependency : dependencies) {
        Class type = assetTypes.get(dependency);
        RefCountedContainer assetRef = assets.get(type).get(dependency);
        assetRef.incRefCount();
        incrementRefCountedDependencies(dependency);
    }
}
