private void readClassDefinitionFormat1(IntArray[] glyphsByClass) throws IOException {
    int startGlyph = input.readUnsignedShort();
    int glyphCount = input.readUnsignedShort();
    int[] classValueArray = input.readUnsignedShortArray(glyphCount);
    for (int i = 0; i < glyphCount; i++) {
        int glyph = startGlyph + i;
        int glyphClass = classValueArray[i];
        if (glyphClass < glyphsByClass.length) {
            glyphsByClass[glyphClass].add(glyph);
        }
    }
}
