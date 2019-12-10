/**
 * Make the canvas' context current. It is highly recommended that the context is only made current inside the AWT thread (for
 * example in an overridden paintGL()).
 */
public void makeCurrent() {
    try {
        canvas.makeCurrent();
        setGlobals();
    } catch (Throwable ex) {
        exception(ex);
    }
}
