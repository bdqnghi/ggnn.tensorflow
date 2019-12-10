public static int toGlFormat(Format format) {
    if (format == Alpha)
        return GL20.GL_ALPHA;
    if (format == Intensity)
        return GL20.GL_ALPHA;
    if (format == LuminanceAlpha)
        return GL20.GL_LUMINANCE_ALPHA;
    if (format == RGB565)
        return GL20.GL_RGB;
    if (format == RGB888)
        return GL20.GL_RGB;
    if (format == RGBA4444)
        return GL20.GL_RGBA;
    if (format == RGBA8888)
        return GL20.GL_RGBA;
    throw new GdxRuntimeException("unknown format: " + format);
}
