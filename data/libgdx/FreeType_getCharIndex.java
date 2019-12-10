/*
			FT_Vector kerning;
			FT_Error error = FT_Get_Kerning((FT_Face)face, leftGlyph, rightGlyph, kernMode, &kerning);
			if(error) return 0;
			return kerning.x;
		*/
public int getCharIndex(int charCode) {
    return getCharIndex(address, charCode);
}
