/*
			return !FT_Set_Char_Size((FT_Face)face, charWidth, charHeight, horzResolution, vertResolution);
		*/
public boolean setPixelSizes(int pixelWidth, int pixelHeight) {
    return setPixelSizes(address, pixelWidth, pixelHeight);
}
