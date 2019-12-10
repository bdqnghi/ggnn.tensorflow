private static int getPixelSize(Format format) {
    if (format == Format.RGB565)
        return 2;
    if (format == Format.RGB888)
        return 3;
    throw new GdxRuntimeException("Can only handle RGB565 or RGB888 images");
}
