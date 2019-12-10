/**
 * Uses ascender and descender of font to calculate real height that makes all glyphs to fit in given pixel size. Source:
 * http://nothings.org/stb/stb_truetype.h / stbtt_ScaleForPixelHeight
 */
public int scaleForPixelHeight(int height) {
    setPixelSizes(0, height);
    SizeMetrics fontMetrics = face.getSize().getMetrics();
    int ascent = FreeType.toInt(fontMetrics.getAscender());
    int descent = FreeType.toInt(fontMetrics.getDescender());
    return height * height / (ascent - descent);
}
