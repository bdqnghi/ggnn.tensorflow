/*
			FT_Glyph border_glyph = (FT_Glyph)glyph;
			FT_Glyph_StrokeBorder(&border_glyph, (FT_Stroker)stroker, inside, 1);
			return (jlong)border_glyph;
		*/
public void toBitmap(int renderMode) {
    long bitmap = toBitmap(address, renderMode);
    if (bitmap == 0)
        throw new GdxRuntimeException("Couldn't render glyph");
    address = bitmap;
    rendered = true;
}
