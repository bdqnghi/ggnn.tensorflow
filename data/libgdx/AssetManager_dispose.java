/**
 * Disposes all assets in the manager and stops all asynchronous loading.
 */
@Override
public synchronized void dispose() {
    log.debug("Disposing.");
    clear();
    executor.dispose();
}
