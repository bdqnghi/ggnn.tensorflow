/**
 * Strips whitespace and returns the rect, or null if the image should be ignored.
 */
private Rect stripWhitespace(BufferedImage source) {
    WritableRaster alphaRaster = source.getAlphaRaster();
    if (alphaRaster == null || (!settings.stripWhitespaceX && !settings.stripWhitespaceY))
        return new Rect(source, 0, 0, source.getWidth(), source.getHeight(), false);
    final byte[] a = new byte[1];
    int top = 0;
    int bottom = source.getHeight();
    if (settings.stripWhitespaceX) {
        outer: for (int y = 0; y < source.getHeight(); y++) {
            for (int x = 0; x < source.getWidth(); x++) {
                alphaRaster.getDataElements(x, y, a);
                int alpha = a[0];
                if (alpha < 0)
                    alpha += 256;
                if (alpha > settings.alphaThreshold)
                    break outer;
            }
            top++;
        }
        outer: for (int y = source.getHeight(); --y >= top; ) {
            for (int x = 0; x < source.getWidth(); x++) {
                alphaRaster.getDataElements(x, y, a);
                int alpha = a[0];
                if (alpha < 0)
                    alpha += 256;
                if (alpha > settings.alphaThreshold)
                    break outer;
            }
            bottom--;
        }
    }
    int left = 0;
    int right = source.getWidth();
    if (settings.stripWhitespaceY) {
        outer: for (int x = 0; x < source.getWidth(); x++) {
            for (int y = top; y < bottom; y++) {
                alphaRaster.getDataElements(x, y, a);
                int alpha = a[0];
                if (alpha < 0)
                    alpha += 256;
                if (alpha > settings.alphaThreshold)
                    break outer;
            }
            left++;
        }
        outer: for (int x = source.getWidth(); --x >= left; ) {
            for (int y = top; y < bottom; y++) {
                alphaRaster.getDataElements(x, y, a);
                int alpha = a[0];
                if (alpha < 0)
                    alpha += 256;
                if (alpha > settings.alphaThreshold)
                    break outer;
            }
            right--;
        }
    }
    int newWidth = right - left;
    int newHeight = bottom - top;
    if (newWidth <= 0 || newHeight <= 0) {
        if (settings.ignoreBlankImages)
            return null;
        else
            return new Rect(emptyImage, 0, 0, 1, 1, false);
    }
    return new Rect(source, left, top, newWidth, newHeight, false);
}
