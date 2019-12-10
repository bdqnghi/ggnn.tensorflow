/*
			return !FT_Load_Glyph((FT_Face)face, glyphIndex, loadFlags);
		*/
public boolean loadChar(int charCode, int loadFlags) {
    return loadChar(address, charCode, loadFlags);
}
