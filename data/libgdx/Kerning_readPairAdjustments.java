private void readPairAdjustments(int lookupPosition) throws IOException {
    input.skip(2);
    int subTableCount = input.readUnsignedShort();
    int[] subTableOffsets = input.readUnsignedShortArray(subTableCount);
    for (int i = 0; i < subTableCount; i++) {
        int subTablePosition = lookupPosition + subTableOffsets[i];
        input.seek((int) subTablePosition);
        int type = input.readUnsignedShort();
        if (type == 1) {
            readPairPositioningAdjustmentFormat1(subTablePosition);
        } else if (type == 2) {
            readPairPositioningAdjustmentFormat2(subTablePosition);
        }
    }
}
