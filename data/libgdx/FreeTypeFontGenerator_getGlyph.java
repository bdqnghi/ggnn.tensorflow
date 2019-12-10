@Override
public Glyph getGlyph(char ch) {
    Glyph glyph = super.getGlyph(ch);
    if (glyph == null && generator != null) {
        generator.setPixelSizes(0, parameter.size);
        float baseline = ((flipped ? -ascent : ascent) + capHeight) / scaleY;
        glyph = generator.createGlyph(ch, this, parameter, stroker, baseline, packer);
        if (glyph == null)
            return missingGlyph;
        setGlyphRegion(glyph, regions.get(glyph.page));
        setGlyph(ch, glyph);
        glyphs.add(glyph);
        dirty = true;
        Face face = generator.face;
        if (parameter.kerning) {
            int glyphIndex = face.getCharIndex(ch);
            for (int i = 0, n = glyphs.size; i < n; i++) {
                Glyph other = glyphs.get(i);
                int otherIndex = face.getCharIndex(other.id);
                int kerning = face.getKerning(glyphIndex, otherIndex, 0);
                if (kerning != 0)
                    glyph.setKerning(other.id, FreeType.toInt(kerning));
                kerning = face.getKerning(otherIndex, glyphIndex, 0);
                if (kerning != 0)
                    other.setKerning(ch, FreeType.toInt(kerning));
            }
        }
    }
    return glyph;
}
