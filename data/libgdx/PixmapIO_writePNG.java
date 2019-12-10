/**
 * Writes the pixmap as a PNG with compression. See {@link PNG} to configure the compression level, more efficiently flip the
 * pixmap vertically, and to write out multiple PNGs with minimal allocation.
 */
static public void writePNG(FileHandle file, Pixmap pixmap) {
    try {
        // Guess at deflated size.
        PNG writer = new PNG((int) (pixmap.getWidth() * pixmap.getHeight() * 1.5f));
        try {
            writer.setFlipY(false);
            writer.write(file, pixmap);
        } finally {
            writer.dispose();
        }
    } catch (IOException ex) {
        throw new GdxRuntimeException("Error writing PNG: " + file, ex);
    }
}
