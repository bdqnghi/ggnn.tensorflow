/**
 * @return the dependencies of an asset or null if the asset has no dependencies.
 */
public synchronized Array<String> getDependencies(String fileName) {
    return assetDependencies.get(fileName);
}
