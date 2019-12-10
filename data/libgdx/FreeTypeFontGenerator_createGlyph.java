/**
 * @return null if glyph was not found.
 */
Glyph createGlyph(char c, FreeTypeBitmapFontData data, FreeTypeFontParameter parameter, Stroker stroker, float baseLine, PixmapPacker packer) {
    boolean missing = face.getCharIndex(c) == 0 && c != 0;
    if (missing)
        return null;
    if (!loadChar(c))
        return null;
    GlyphSlot slot = face.getGlyph();
    FreeType.Glyph mainGlyph = slot.getGlyph();
    try {
        mainGlyph.toBitmap(parameter.mono ? FreeType.FT_RENDER_MODE_MONO : FreeType.FT_RENDER_MODE_NORMAL);
    } catch (GdxRuntimeException e) {
        mainGlyph.dispose();
        Gdx.app.log("FreeTypeFontGenerator", "Couldn't render char: " + c);
        return null;
    }
    Bitmap mainBitmap = mainGlyph.getBitmap();
    Pixmap mainPixmap = mainBitmap.getPixmap(Format.RGBA8888, parameter.color, parameter.gamma);
    if (mainBitmap.getWidth() != 0 && mainBitmap.getRows() != 0) {
        int offsetX = 0, offsetY = 0;
        if (parameter.borderWidth > 0) {
            // execute stroker; this generates a glyph "extended" along the outline
            int top = mainGlyph.getTop(), left = mainGlyph.getLeft();
            FreeType.Glyph borderGlyph = slot.getGlyph();
            borderGlyph.strokeBorder(stroker, false);
            borderGlyph.toBitmap(parameter.mono ? FreeType.FT_RENDER_MODE_MONO : FreeType.FT_RENDER_MODE_NORMAL);
            offsetX = left - borderGlyph.getLeft();
            offsetY = -(top - borderGlyph.getTop());
            // Render border (pixmap is bigger than main).
            Bitmap borderBitmap = borderGlyph.getBitmap();
            Pixmap borderPixmap = borderBitmap.getPixmap(Format.RGBA8888, parameter.borderColor, parameter.borderGamma);
            // Draw main glyph on top of border.
            for (int i = 0, n = parameter.renderCount; i < n; i++) borderPixmap.drawPixmap(mainPixmap, offsetX, offsetY);
            mainPixmap.dispose();
            mainGlyph.dispose();
            mainPixmap = borderPixmap;
            mainGlyph = borderGlyph;
        }
        if (parameter.shadowOffsetX != 0 || parameter.shadowOffsetY != 0) {
            int mainW = mainPixmap.getWidth(), mainH = mainPixmap.getHeight();
            int shadowOffsetX = Math.max(parameter.shadowOffsetX, 0), shadowOffsetY = Math.max(parameter.shadowOffsetY, 0);
            int shadowW = mainW + Math.abs(parameter.shadowOffsetX), shadowH = mainH + Math.abs(parameter.shadowOffsetY);
            Pixmap shadowPixmap = new Pixmap(shadowW, shadowH, mainPixmap.getFormat());
            Color shadowColor = parameter.shadowColor;
            byte r = (byte) (shadowColor.r * 255), g = (byte) (shadowColor.g * 255), b = (byte) (shadowColor.b * 255);
            float a = shadowColor.a;
            ByteBuffer mainPixels = mainPixmap.getPixels();
            ByteBuffer shadowPixels = shadowPixmap.getPixels();
            for (int y = 0; y < mainH; y++) {
                int shadowRow = shadowW * (y + shadowOffsetY) + shadowOffsetX;
                for (int x = 0; x < mainW; x++) {
                    int mainPixel = (mainW * y + x) * 4;
                    byte mainA = mainPixels.get(mainPixel + 3);
                    if (mainA == 0)
                        continue;
                    int shadowPixel = (shadowRow + x) * 4;
                    shadowPixels.put(shadowPixel, r);
                    shadowPixels.put(shadowPixel + 1, g);
                    shadowPixels.put(shadowPixel + 2, b);
                    shadowPixels.put(shadowPixel + 3, (byte) ((mainA & 0xff) * a));
                }
            }
            // Draw main glyph (with any border) on top of shadow.
            for (int i = 0, n = parameter.renderCount; i < n; i++) shadowPixmap.drawPixmap(mainPixmap, Math.max(-parameter.shadowOffsetX, 0), Math.max(-parameter.shadowOffsetY, 0));
            mainPixmap.dispose();
            mainPixmap = shadowPixmap;
        } else if (parameter.borderWidth == 0) {
            // No shadow and no border, draw glyph additional times.
            for (int i = 0, n = parameter.renderCount - 1; i < n; i++) mainPixmap.drawPixmap(mainPixmap, 0, 0);
        }
    }
    GlyphMetrics metrics = slot.getMetrics();
    Glyph glyph = new Glyph();
    glyph.id = c;
    glyph.width = mainPixmap.getWidth();
    glyph.height = mainPixmap.getHeight();
    glyph.xoffset = mainGlyph.getLeft();
    glyph.yoffset = parameter.flip ? -mainGlyph.getTop() + (int) baseLine : -(glyph.height - mainGlyph.getTop()) - (int) baseLine;
    glyph.xadvance = FreeType.toInt(metrics.getHoriAdvance()) + (int) parameter.borderWidth + parameter.spaceX;
    if (bitmapped) {
        mainPixmap.setColor(Color.CLEAR);
        mainPixmap.fill();
        ByteBuffer buf = mainBitmap.getBuffer();
        int whiteIntBits = Color.WHITE.toIntBits();
        int clearIntBits = Color.CLEAR.toIntBits();
        for (int h = 0; h < glyph.height; h++) {
            int idx = h * mainBitmap.getPitch();
            for (int w = 0; w < (glyph.width + glyph.xoffset); w++) {
                int bit = (buf.get(idx + (w / 8)) >>> (7 - (w % 8))) & 1;
                mainPixmap.drawPixel(w, h, ((bit == 1) ? whiteIntBits : clearIntBits));
            }
        }
    }
    Rectangle rect = packer.pack(mainPixmap);
    // Glyph is always packed into the last page for now.
    glyph.page = packer.getPages().size - 1;
    glyph.srcX = (int) rect.x;
    glyph.srcY = (int) rect.y;
    // If a page was added, create a new texture region for the incrementally added glyph.
    if (parameter.incremental && data.regions != null && data.regions.size <= glyph.page)
        packer.updateTextureRegions(data.regions, parameter.minFilter, parameter.magFilter, parameter.genMipMaps);
    mainPixmap.dispose();
    mainGlyph.dispose();
    return glyph;
}
