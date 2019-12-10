void setPixelSizes(int pixelWidth, int pixelHeight) {
    this.pixelWidth = pixelWidth;
    this.pixelHeight = pixelHeight;
    if (!bitmapped && !face.setPixelSizes(pixelWidth, pixelHeight))
        throw new GdxRuntimeException("Couldn't set size for font");
}
