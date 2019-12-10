/**
 * Sets an {@link AssetErrorListener} to be invoked in case loading an asset failed.
 * @param listener the listener or null
 */
public synchronized void setErrorListener(AssetErrorListener listener) {
    this.listener = listener;
}
