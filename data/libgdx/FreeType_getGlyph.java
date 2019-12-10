/*
			return !FT_Render_Glyph((FT_GlyphSlot)slot, (FT_Render_Mode)renderMode);
		*/
public Glyph getGlyph() {
    long glyph = getGlyph(address);
    if (glyph == 0)
        throw new GdxRuntimeException("Couldn't get glyph");
    return new Glyph(glyph);
}
