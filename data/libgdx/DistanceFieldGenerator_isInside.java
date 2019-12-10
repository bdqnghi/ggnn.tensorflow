/**
 * Returns {@code true} if the color is considered as the "inside" of the image,
 * {@code false} if considered "outside".
 *
 * <p> Any color with one of its color channels at least 128
 * <em>and</em> its alpha channel at least 128 is considered "inside".
 */
private boolean isInside(int rgb) {
    return (rgb & 0x808080) != 0 && (rgb & 0x80000000) != 0;
}
