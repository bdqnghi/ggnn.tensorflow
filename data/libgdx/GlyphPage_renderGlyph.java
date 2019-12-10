/**
 * Loads a single glyph to the backing texture, if it fits.
 */
private boolean renderGlyph(Glyph glyph, int pageX, int pageY, int width, int height) {
    scratchGraphics.setComposite(AlphaComposite.Clear);
    scratchGraphics.fillRect(0, 0, MAX_GLYPH_SIZE, MAX_GLYPH_SIZE);
    scratchGraphics.setComposite(AlphaComposite.SrcOver);
    ByteBuffer glyphPixels = scratchByteBuffer;
    int format;
    if (unicodeFont.getRenderType() == RenderType.FreeType && unicodeFont.bitmapFont != null) {
        BitmapFontData data = unicodeFont.bitmapFont.getData();
        BitmapFont.Glyph g = data.getGlyph((char) glyph.getCodePoint());
        Pixmap fontPixmap = unicodeFont.bitmapFont.getRegions().get(g.page).getTexture().getTextureData().consumePixmap();
        int fontWidth = fontPixmap.getWidth();
        int padTop = unicodeFont.getPaddingTop(), padBottom = unicodeFont.getPaddingBottom();
        int padLeftBytes = unicodeFont.getPaddingLeft() * 4;
        int padXBytes = padLeftBytes + unicodeFont.getPaddingRight() * 4;
        int glyphRowBytes = width * 4, fontRowBytes = g.width * 4;
        ByteBuffer fontPixels = fontPixmap.getPixels();
        byte[] row = new byte[glyphRowBytes];
        glyphPixels.position(0);
        for (int i = 0; i < padTop; i++) glyphPixels.put(row);
        glyphPixels.position((height - padBottom) * glyphRowBytes);
        for (int i = 0; i < padBottom; i++) glyphPixels.put(row);
        glyphPixels.position(padTop * glyphRowBytes);
        for (int y = 0, n = g.height; y < n; y++) {
            fontPixels.position(((g.srcY + y) * fontWidth + g.srcX) * 4);
            fontPixels.get(row, padLeftBytes, fontRowBytes);
            glyphPixels.put(row);
        }
        fontPixels.position(0);
        glyphPixels.position(height * glyphRowBytes);
        glyphPixels.flip();
        format = GL11.GL_RGBA;
    } else {
        // Draw the glyph to the scratch image using Java2D.
        if (unicodeFont.getRenderType() == RenderType.Native) {
            for (Iterator iter = unicodeFont.getEffects().iterator(); iter.hasNext(); ) {
                Effect effect = (Effect) iter.next();
                if (effect instanceof ColorEffect)
                    scratchGraphics.setColor(((ColorEffect) effect).getColor());
            }
            scratchGraphics.setColor(java.awt.Color.white);
            scratchGraphics.setFont(unicodeFont.getFont());
            scratchGraphics.drawString("" + (char) glyph.getCodePoint(), 0, unicodeFont.getAscent());
        } else if (unicodeFont.getRenderType() == RenderType.Java) {
            scratchGraphics.setColor(java.awt.Color.white);
            for (Iterator iter = unicodeFont.getEffects().iterator(); iter.hasNext(); ) ((Effect) iter.next()).draw(scratchImage, scratchGraphics, unicodeFont, glyph);
            // The shape will never be needed again.
            glyph.setShape(null);
        }
        width = Math.min(width, texture.getWidth());
        height = Math.min(height, texture.getHeight());
        WritableRaster raster = scratchImage.getRaster();
        int[] row = new int[width];
        for (int y = 0; y < height; y++) {
            raster.getDataElements(0, y, width, 1, row);
            scratchIntBuffer.put(row);
        }
        format = GL12.GL_BGRA;
    }
    // Simple deduplication, doesn't work across pages of course.
    String hash = "";
    try {
        MessageDigest md = MessageDigest.getInstance("SHA-256");
        md.update(glyphPixels);
        BigInteger bigInt = new BigInteger(1, md.digest());
        hash = bigInt.toString(16);
    } catch (NoSuchAlgorithmException ex) {
    }
    scratchByteBuffer.clear();
    scratchIntBuffer.clear();
    try {
        for (int i = 0, n = hashes.size(); i < n; i++) {
            String other = hashes.get(i);
            if (other.equals(hash)) {
                Glyph dupe = pageGlyphs.get(i);
                glyph.setTexture(dupe.texture, dupe.u, dupe.v, dupe.u2, dupe.v2);
                return false;
            }
        }
    } finally {
        hashes.add(hash);
        pageGlyphs.add(glyph);
    }
    Gdx.gl.glTexSubImage2D(texture.glTarget, 0, pageX, pageY, width, height, format, GL11.GL_UNSIGNED_BYTE, glyphPixels);
    float u = pageX / (float) texture.getWidth();
    float v = pageY / (float) texture.getHeight();
    float u2 = (pageX + width) / (float) texture.getWidth();
    float v2 = (pageY + height) / (float) texture.getHeight();
    glyph.setTexture(texture, u, v, u2, v2);
    return true;
}
