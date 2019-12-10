/**
 * For a distance as returned by {@link #findSignedDistance}, returns the corresponding "RGB" (really ARGB) color value.
 *
 * @param signedDistance the signed distance of a pixel
 * @return an ARGB color value suitable for {@link BufferedImage#setRGB}.
 */
private int distanceToRGB(float signedDistance) {
    float alpha = 0.5f + 0.5f * (signedDistance / spread);
    // compensate for rounding errors
    alpha = Math.min(1, Math.max(0, alpha));
    // no unsigned byte in Java :(
    int alphaByte = (int) (alpha * 0xFF);
    return (alphaByte << 24) | (color.getRGB() & 0xFFFFFF);
}
