/*
			return FT_HAS_KERNING(((FT_Face)face));
		*/
public int getKerning(int leftGlyph, int rightGlyph, int kernMode) {
    return getKerning(address, leftGlyph, rightGlyph, kernMode);
}
