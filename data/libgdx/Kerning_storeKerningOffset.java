private void storeKerningOffset(int firstGlyphCode, int secondGlyphCode, int offset) {
    // Scale the offset values using the font size.
    int value = Math.round(offset * scale);
    if (value == 0) {
        return;
    }
    int key = (firstGlyphCode << 16) | secondGlyphCode;
    kernings.put(key, value);
}
