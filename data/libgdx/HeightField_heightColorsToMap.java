/**
 * Simply creates an array containing only all the red components of the data.
 */
public static float[] heightColorsToMap(final ByteBuffer data, final Pixmap.Format format, int width, int height) {
    final int bytesPerColor = (format == Format.RGB888 ? 3 : (format == Format.RGBA8888 ? 4 : 0));
    if (bytesPerColor == 0)
        throw new GdxRuntimeException("Unsupported format, should be either RGB8 or RGBA8");
    if (data.remaining() < (width * height * bytesPerColor))
        throw new GdxRuntimeException("Incorrect map size");
    final int startPos = data.position();
    byte[] source = null;
    int sourceOffset = 0;
    if (data.hasArray() && !data.isReadOnly()) {
        source = data.array();
        sourceOffset = data.arrayOffset() + startPos;
    } else {
        source = new byte[width * height * bytesPerColor];
        data.get(source);
        data.position(startPos);
    }
    float[] dest = new float[width * height];
    for (int i = 0; i < dest.length; ++i) {
        int v = source[sourceOffset + i * bytesPerColor];
        v = v < 0 ? 256 + v : v;
        dest[i] = (float) v / 255f;
    }
    return dest;
}
