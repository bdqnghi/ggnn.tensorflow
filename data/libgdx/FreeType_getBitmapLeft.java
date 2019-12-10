/*
			FT_GlyphSlot glyph = ((FT_GlyphSlot)slot);
			return (jlong)&(glyph->bitmap);
		*/
public int getBitmapLeft() {
    return getBitmapLeft(address);
}
