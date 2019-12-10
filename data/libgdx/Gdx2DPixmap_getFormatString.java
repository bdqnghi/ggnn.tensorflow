public String getFormatString() {
    switch(format) {
        case GDX2D_FORMAT_ALPHA:
            return "alpha";
        case GDX2D_FORMAT_LUMINANCE_ALPHA:
            return "luminance alpha";
        case GDX2D_FORMAT_RGB888:
            return "rgb888";
        case GDX2D_FORMAT_RGBA8888:
            return "rgba8888";
        case GDX2D_FORMAT_RGB565:
            return "rgb565";
        case GDX2D_FORMAT_RGBA4444:
            return "rgba4444";
        default:
            return "unknown";
    }
}
