private void readKERN() throws IOException {
    input.seek(kernOffset + 2);
    for (int subTableCount = input.readUnsignedShort(); subTableCount > 0; subTableCount--) {
        input.skip(2 * 2);
        int tupleIndex = input.readUnsignedShort();
        if (!((tupleIndex & 1) != 0) || (tupleIndex & 2) != 0 || (tupleIndex & 4) != 0)
            return;
        if (tupleIndex >> 8 != 0)
            continue;
        int kerningCount = input.readUnsignedShort();
        input.skip(3 * 2);
        while (kerningCount-- > 0) {
            int firstGlyphCode = input.readUnsignedShort();
            int secondGlyphCode = input.readUnsignedShort();
            int offset = (int) input.readShort();
            storeKerningOffset(firstGlyphCode, secondGlyphCode, offset);
        }
    }
}
