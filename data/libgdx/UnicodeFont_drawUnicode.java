private void drawUnicode(String text, int startIndex, int endIndex) {
    char[] chars = text.substring(0, endIndex).toCharArray();
    GlyphVector vector = font.layoutGlyphVector(GlyphPage.renderContext, chars, 0, chars.length, Font.LAYOUT_LEFT_TO_RIGHT);
    int maxWidth = 0, totalHeight = 0, lines = 0;
    int extraX = 0, extraY = ascent;
    boolean startNewLine = false;
    Texture lastBind = null;
    int offsetX = 0;
    for (int glyphIndex = 0, n = vector.getNumGlyphs(); glyphIndex < n; glyphIndex++) {
        int charIndex = vector.getGlyphCharIndex(glyphIndex);
        if (charIndex < startIndex)
            continue;
        if (charIndex > endIndex)
            break;
        int codePoint = text.codePointAt(charIndex);
        Rectangle bounds = getGlyphBounds(vector, glyphIndex, codePoint);
        bounds.x += offsetX;
        Glyph glyph = getGlyph(vector.getGlyphCode(glyphIndex), codePoint, bounds, vector, glyphIndex);
        if (startNewLine && codePoint != '\n') {
            extraX = -bounds.x;
            startNewLine = false;
        }
        if (glyph.getTexture() == null && missingGlyph != null && glyph.isMissing())
            glyph = missingGlyph;
        if (glyph.getTexture() != null) {
            // Draw glyph, only binding a new glyph page texture when necessary.
            Texture texture = glyph.getTexture();
            if (lastBind != null && lastBind != texture) {
                GL11.glEnd();
                lastBind = null;
            }
            if (lastBind == null) {
                texture.bind();
                GL11.glBegin(GL11.GL_QUADS);
                lastBind = texture;
            }
            int glyphX = bounds.x + extraX;
            int glyphY = bounds.y + extraY;
            GL11.glTexCoord2f(glyph.getU(), glyph.getV());
            GL11.glVertex3f(glyphX, glyphY, 0);
            GL11.glTexCoord2f(glyph.getU(), glyph.getV2());
            GL11.glVertex3f(glyphX, glyphY + glyph.getHeight(), 0);
            GL11.glTexCoord2f(glyph.getU2(), glyph.getV2());
            GL11.glVertex3f(glyphX + glyph.getWidth(), glyphY + glyph.getHeight(), 0);
            GL11.glTexCoord2f(glyph.getU2(), glyph.getV());
            GL11.glVertex3f(glyphX + glyph.getWidth(), glyphY, 0);
        }
        if (glyphIndex > 0)
            extraX += paddingRight + paddingLeft + paddingAdvanceX;
        maxWidth = Math.max(maxWidth, bounds.x + extraX + bounds.width);
        totalHeight = Math.max(totalHeight, ascent + bounds.y + bounds.height);
        if (codePoint == '\n') {
            // Mac gives -1 for bounds.x of '\n', so use the bounds.x of the next glyph.
            startNewLine = true;
            extraY += getLineHeight();
            lines++;
            totalHeight = 0;
        } else if (renderType == RenderType.Native)
            offsetX += bounds.width;
    }
    if (lastBind != null)
        GL11.glEnd();
}
