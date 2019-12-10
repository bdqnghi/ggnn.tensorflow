/*
			FT_Done_Glyph((FT_Glyph)glyph);
		*/
public void strokeBorder(Stroker stroker, boolean inside) {
    address = strokeBorder(address, stroker.address, inside);
}
