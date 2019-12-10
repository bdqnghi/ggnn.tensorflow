/**
 * Blocks until the specified aseet is loaded.
 * @param fileName the file name (interpretation depends on {@link AssetLoader})
 */
public void finishLoadingAsset(String fileName) {
    log.debug("Waiting for asset to be loaded: " + fileName);
    while (!isLoaded(fileName)) {
        update();
        ThreadUtils.yield();
    }
    log.debug("Asset loaded: " + fileName);
}
