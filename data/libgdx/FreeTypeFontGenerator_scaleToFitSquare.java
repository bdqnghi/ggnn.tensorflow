/**
 * Uses max advance, ascender and descender of font to calculate real height that makes any n glyphs to fit in given pixel
 * width and height.
 * @param width the max width to fit (in pixels)
 * @param height the max height to fit (in pixels)
 * @param numChars max number of characters that to fill width
 */
public int scaleToFitSquare(int width, int height, int numChars) {
    return Math.min(scaleForPixelHeight(height), scaleForPixelWidth(width, numChars));
}
