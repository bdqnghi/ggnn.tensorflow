/**
 * Returns true when the frame containing the canvas is the foreground window.
 */
public boolean isActive() {
    Component root = SwingUtilities.getRoot(canvas);
    return root instanceof Frame ? ((Frame) root).isActive() : true;
}
