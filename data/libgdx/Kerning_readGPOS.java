private void readGPOS() throws IOException {
    // See https://www.microsoft.com/typography/otspec/gpos.htm for the format and semantics.
    // Useful tools are ttfdump and showttf.
    input.seek(gposOffset + 4 + 2 + 2);
    int lookupListOffset = input.readUnsignedShort();
    input.seek(gposOffset + lookupListOffset);
    int lookupListPosition = input.getPosition();
    int lookupCount = input.readUnsignedShort();
    int[] lookupOffsets = input.readUnsignedShortArray(lookupCount);
    for (int i = 0; i < lookupCount; i++) {
        int lookupPosition = lookupListPosition + lookupOffsets[i];
        input.seek(lookupPosition);
        int type = input.readUnsignedShort();
        if (type == 2) {
            readPairAdjustments(lookupPosition);
        }
    }
}
