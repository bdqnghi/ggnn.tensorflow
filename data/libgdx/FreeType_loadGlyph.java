/*
			return !FT_Set_Pixel_Sizes((FT_Face)face, pixelWidth, pixelHeight);
		*/
public boolean loadGlyph(int glyphIndex, int loadFlags) {
    return loadGlyph(address, glyphIndex, loadFlags);
}
