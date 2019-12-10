/**
 * Test whether the canvas' context is current.
 */
public boolean isCurrent() {
    try {
        return canvas.isCurrent();
    } catch (Throwable ex) {
        exception(ex);
        return false;
    }
}
