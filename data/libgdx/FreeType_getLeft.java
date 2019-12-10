/*
			FT_BitmapGlyph glyph_bitmap = ((FT_BitmapGlyph)glyph);
			return (jlong)&(glyph_bitmap->bitmap);
		*/
public int getLeft() {
    if (!rendered) {
        throw new GdxRuntimeException("Glyph is not yet rendered");
    }
    return getLeft(address);
}
