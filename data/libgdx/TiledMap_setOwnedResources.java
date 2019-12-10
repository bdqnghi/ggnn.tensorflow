/**
 * Used by loaders to set resources when loading the map directly, without {@link AssetManager}. To be disposed in
 * {@link #dispose()}.
 * @param resources
 */
public void setOwnedResources(Array<? extends Disposable> resources) {
    this.ownedResources = resources;
}
