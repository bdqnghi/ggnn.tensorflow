/**
 * Clears and disposes all assets and the preloading queue.
 */
public synchronized void clear() {
    loadQueue.clear();
    while (!update()) ;
    ObjectIntMap<String> dependencyCount = new ObjectIntMap<String>();
    while (assetTypes.size > 0) {
        // for each asset, figure out how often it was referenced
        dependencyCount.clear();
        Array<String> assets = assetTypes.keys().toArray();
        for (String asset : assets) {
            dependencyCount.put(asset, 0);
        }
        for (String asset : assets) {
            Array<String> dependencies = assetDependencies.get(asset);
            if (dependencies == null)
                continue;
            for (String dependency : dependencies) {
                int count = dependencyCount.get(dependency, 0);
                count++;
                dependencyCount.put(dependency, count);
            }
        }
        // only dispose of assets that are root assets (not referenced)
        for (String asset : assets) {
            if (dependencyCount.get(asset, 0) == 0) {
                unload(asset);
            }
        }
    }
    this.assets.clear();
    this.assetTypes.clear();
    this.assetDependencies.clear();
    this.loaded = 0;
    this.toLoad = 0;
    this.loadQueue.clear();
    this.tasks.clear();
}
