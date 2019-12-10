/**
 * @return the number of currently queued assets
 */
public synchronized int getQueuedAssets() {
    return loadQueue.size + tasks.size();
}
