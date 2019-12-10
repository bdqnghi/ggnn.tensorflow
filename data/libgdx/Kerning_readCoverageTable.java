private int[] readCoverageTable() throws IOException {
    int format = input.readUnsignedShort();
    if (format == 1) {
        int glyphCount = input.readUnsignedShort();
        int[] glyphArray = input.readUnsignedShortArray(glyphCount);
        return glyphArray;
    } else if (format == 2) {
        int rangeCount = input.readUnsignedShort();
        IntArray glyphArray = new IntArray();
        for (int i = 0; i < rangeCount; i++) {
            int start = input.readUnsignedShort();
            int end = input.readUnsignedShort();
            input.skip(2);
            for (int glyph = start; glyph <= end; glyph++) {
                glyphArray.add(glyph);
            }
        }
        return glyphArray.shrink();
    }
    throw new IOException("Unknown coverage table format " + format);
}
