private void readPairPositioningAdjustmentFormat1(long subTablePosition) throws IOException {
    int coverageOffset = input.readUnsignedShort();
    int valueFormat1 = input.readUnsignedShort();
    int valueFormat2 = input.readUnsignedShort();
    int pairSetCount = input.readUnsignedShort();
    int[] pairSetOffsets = input.readUnsignedShortArray(pairSetCount);
    input.seek((int) (subTablePosition + coverageOffset));
    int[] coverage = readCoverageTable();
    // The two should be equal, but just in case they're not, we can still do something sensible.
    pairSetCount = Math.min(pairSetCount, coverage.length);
    for (int i = 0; i < pairSetCount; i++) {
        int firstGlyph = coverage[i];
        input.seek((int) (subTablePosition + pairSetOffsets[i]));
        int pairValueCount = input.readUnsignedShort();
        for (int j = 0; j < pairValueCount; j++) {
            int secondGlyph = input.readUnsignedShort();
            int xAdvance1 = readXAdvanceFromValueRecord(valueFormat1);
            // Value2
            readXAdvanceFromValueRecord(valueFormat2);
            if (xAdvance1 != 0) {
                storeKerningOffset(firstGlyph, secondGlyph, xAdvance1);
            }
        }
    }
}
