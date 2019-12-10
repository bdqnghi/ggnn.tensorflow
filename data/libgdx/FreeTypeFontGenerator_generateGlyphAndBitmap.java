/**
 * Returns null if glyph was not found. If there is nothing to render, for example with various space characters, then bitmap
 * is null.
 */
public GlyphAndBitmap generateGlyphAndBitmap(int c, int size, boolean flip) {
    setPixelSizes(0, size);
    SizeMetrics fontMetrics = face.getSize().getMetrics();
    int baseline = FreeType.toInt(fontMetrics.getAscender());
    // 0 means 'undefined character code'
    if (face.getCharIndex(c) == 0) {
        return null;
    }
    // Try to load character
    if (!loadChar(c)) {
        throw new GdxRuntimeException("Unable to load character!");
    }
    GlyphSlot slot = face.getGlyph();
    // Try to render to bitmap
    Bitmap bitmap;
    if (bitmapped) {
        bitmap = slot.getBitmap();
    } else if (!slot.renderGlyph(FreeType.FT_RENDER_MODE_NORMAL)) {
        bitmap = null;
    } else {
        bitmap = slot.getBitmap();
    }
    GlyphMetrics metrics = slot.getMetrics();
    Glyph glyph = new Glyph();
    if (bitmap != null) {
        glyph.width = bitmap.getWidth();
        glyph.height = bitmap.getRows();
    } else {
        glyph.width = 0;
        glyph.height = 0;
    }
    glyph.xoffset = slot.getBitmapLeft();
    glyph.yoffset = flip ? -slot.getBitmapTop() + baseline : -(glyph.height - slot.getBitmapTop()) - baseline;
    glyph.xadvance = FreeType.toInt(metrics.getHoriAdvance());
    glyph.srcX = 0;
    glyph.srcY = 0;
    glyph.id = c;
    GlyphAndBitmap result = new GlyphAndBitmap();
    result.glyph = glyph;
    result.bitmap = bitmap;
    return result;
}
