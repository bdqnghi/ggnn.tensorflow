public static int toGlType(Format format) {
    if (format == Alpha)
        return GL20.GL_UNSIGNED_BYTE;
    if (format == Intensity)
        return GL20.GL_UNSIGNED_BYTE;
    if (format == LuminanceAlpha)
        return GL20.GL_UNSIGNED_BYTE;
    if (format == RGB565)
        return GL20.GL_UNSIGNED_SHORT_5_6_5;
    if (format == RGB888)
        return GL20.GL_UNSIGNED_BYTE;
    if (format == RGBA4444)
        return GL20.GL_UNSIGNED_SHORT_4_4_4_4;
    if (format == RGBA8888)
        return GL20.GL_UNSIGNED_BYTE;
    throw new GdxRuntimeException("unknown format: " + format);
}
