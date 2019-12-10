/**
 * Handles a runtime/loading error in {@link #update()} by optionally invoking the {@link AssetErrorListener}.
 * @param t
 */
private void handleTaskError(Throwable t) {
    log.error("Error loading asset.", t);
    if (tasks.isEmpty())
        throw new GdxRuntimeException(t);
    // pop the faulty task from the stack
    AssetLoadingTask task = tasks.pop();
    AssetDescriptor assetDesc = task.assetDesc;
    // remove all dependencies
    if (task.dependenciesLoaded && task.dependencies != null) {
        for (AssetDescriptor desc : task.dependencies) {
            unload(desc.fileName);
        }
    }
    // clear the rest of the stack
    tasks.clear();
    // inform the listener that something bad happened
    if (listener != null) {
        listener.error(assetDesc, t);
    } else {
        throw new GdxRuntimeException(t);
    }
}
