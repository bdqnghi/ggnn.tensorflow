private void readClassDefinitionFormat2(IntArray[] glyphsByClass) throws IOException {
    int classRangeCount = input.readUnsignedShort();
    for (int i = 0; i < classRangeCount; i++) {
        int start = input.readUnsignedShort();
        int end = input.readUnsignedShort();
        int glyphClass = input.readUnsignedShort();
        if (glyphClass < glyphsByClass.length) {
            for (int glyph = start; glyph <= end; glyph++) {
                glyphsByClass[glyphClass].add(glyph);
            }
        }
    }
}
