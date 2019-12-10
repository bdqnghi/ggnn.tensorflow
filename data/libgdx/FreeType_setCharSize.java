/*
			return !FT_Select_Size((FT_Face)face, strike_index);
		*/
public boolean setCharSize(int charWidth, int charHeight, int horzResolution, int vertResolution) {
    return setCharSize(address, charWidth, charHeight, horzResolution, vertResolution);
}
