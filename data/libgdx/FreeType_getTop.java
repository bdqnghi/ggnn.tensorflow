/*
			FT_BitmapGlyph glyph_bitmap = ((FT_BitmapGlyph)glyph);
			return glyph_bitmap->left;
		*/
public int getTop() {
    if (!rendered) {
        throw new GdxRuntimeException("Glyph is not yet rendered");
    }
    return getTop(address);
}
