public static int toGlType(int format) {
    switch(format) {
        case GDX2D_FORMAT_ALPHA:
        case GDX2D_FORMAT_LUMINANCE_ALPHA:
        case GDX2D_FORMAT_RGB888:
        case GDX2D_FORMAT_RGBA8888:
            return GL20.GL_UNSIGNED_BYTE;
        case GDX2D_FORMAT_RGB565:
            return GL20.GL_UNSIGNED_SHORT_5_6_5;
        case GDX2D_FORMAT_RGBA4444:
            return GL20.GL_UNSIGNED_SHORT_4_4_4_4;
        default:
            throw new GdxRuntimeException("unknown format: " + format);
    }
}
