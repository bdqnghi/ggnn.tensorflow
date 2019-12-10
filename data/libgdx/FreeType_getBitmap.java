/*
			FT_Glyph bitmap = (FT_Glyph)glyph;
			FT_Error error = FT_Glyph_To_Bitmap(&bitmap, (FT_Render_Mode)renderMode, NULL, 1);
			if(error) return 0;
			return (jlong)bitmap;
		*/
public Bitmap getBitmap() {
    if (!rendered) {
        throw new GdxRuntimeException("Glyph is not yet rendered");
    }
    return new Bitmap(getBitmap(address));
}
