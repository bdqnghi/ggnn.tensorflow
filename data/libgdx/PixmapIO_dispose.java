/**
 * Disposal will happen automatically in {@link #finalize()} but can be done explicitly if desired.
 */
public void dispose() {
    deflater.end();
}
