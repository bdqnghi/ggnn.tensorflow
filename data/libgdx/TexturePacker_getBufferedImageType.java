private int getBufferedImageType(Format format) {
    switch(settings.format) {
        case RGBA8888:
        case RGBA4444:
            return BufferedImage.TYPE_INT_ARGB;
        case RGB565:
        case RGB888:
            return BufferedImage.TYPE_INT_RGB;
        case Alpha:
            return BufferedImage.TYPE_BYTE_GRAY;
        default:
            throw new RuntimeException("Unsupported format: " + settings.format);
    }
}
