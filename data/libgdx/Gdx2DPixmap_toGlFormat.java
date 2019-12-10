public static int toGlFormat(int format) {
    switch(format) {
        case GDX2D_FORMAT_ALPHA:
            return GL20.GL_ALPHA;
        case GDX2D_FORMAT_LUMINANCE_ALPHA:
            return GL20.GL_LUMINANCE_ALPHA;
        case GDX2D_FORMAT_RGB888:
        case GDX2D_FORMAT_RGB565:
            return GL20.GL_RGB;
        case GDX2D_FORMAT_RGBA8888:
        case GDX2D_FORMAT_RGBA4444:
            return GL20.GL_RGBA;
        default:
            throw new GdxRuntimeException("unknown format: " + format);
    }
}
