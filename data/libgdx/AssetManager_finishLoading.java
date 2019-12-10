/**
 * Blocks until all assets are loaded.
 */
public void finishLoading() {
    log.debug("Waiting for loading to complete...");
    while (!update()) ThreadUtils.yield();
    log.debug("Loading complete.");
}
