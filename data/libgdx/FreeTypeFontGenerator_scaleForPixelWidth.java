/**
 * Uses max advance, ascender and descender of font to calculate real height that makes any n glyphs to fit in given pixel
 * width.
 * @param width the max width to fit (in pixels)
 * @param numChars max number of characters that to fill width
 */
public int scaleForPixelWidth(int width, int numChars) {
    SizeMetrics fontMetrics = face.getSize().getMetrics();
    int advance = FreeType.toInt(fontMetrics.getMaxAdvance());
    int ascent = FreeType.toInt(fontMetrics.getAscender());
    int descent = FreeType.toInt(fontMetrics.getDescender());
    int unscaledHeight = ascent - descent;
    int height = unscaledHeight * width / (advance * numChars);
    setPixelSizes(0, height);
    return height;
}
