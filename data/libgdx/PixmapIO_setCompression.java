/**
 * Sets the deflate compression level. Default is {@link Deflater#DEFAULT_COMPRESSION}.
 */
public void setCompression(int level) {
    deflater.setLevel(level);
}
