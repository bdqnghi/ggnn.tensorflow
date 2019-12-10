/**
 * Disposes any pixmap pages which don't have a texture. Page pixmaps that have a texture will not be disposed until their
 * texture is disposed.
 */
public synchronized void dispose() {
    for (Page page : pages) {
        if (page.texture == null) {
            page.image.dispose();
        }
    }
    disposed = true;
}
