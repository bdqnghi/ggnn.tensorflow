/**
 * Frees up memory by dropping the buffer and underlying resources. If the batch is needed again after disposing it can be
 * {@link #initialize(int) initialized} again.
 */
public void dispose() {
    clear();
    vertices = null;
    mesh.dispose();
}
