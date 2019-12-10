private void readPairPositioningAdjustmentFormat2(int subTablePosition) throws IOException {
    int coverageOffset = input.readUnsignedShort();
    int valueFormat1 = input.readUnsignedShort();
    int valueFormat2 = input.readUnsignedShort();
    int classDefOffset1 = input.readUnsignedShort();
    int classDefOffset2 = input.readUnsignedShort();
    int class1Count = input.readUnsignedShort();
    int class2Count = input.readUnsignedShort();
    int position = input.getPosition();
    IntArray[] glyphsByClass1 = readClassDefinition(subTablePosition + classDefOffset1, class1Count);
    IntArray[] glyphsByClass2 = readClassDefinition(subTablePosition + classDefOffset2, class2Count);
    input.seek(position);
    for (int i = 0; i < class1Count; i++) {
        for (int j = 0; j < class2Count; j++) {
            int xAdvance1 = readXAdvanceFromValueRecord(valueFormat1);
            // Value2
            readXAdvanceFromValueRecord(valueFormat2);
            if (xAdvance1 == 0)
                continue;
            for (int k = 0; k < glyphsByClass1[i].size; k++) {
                int glyph1 = glyphsByClass1[i].items[k];
                for (int l = 0; l < glyphsByClass2[j].size; l++) {
                    int glyph2 = glyphsByClass2[j].items[l];
                    storeKerningOffset(glyph1, glyph2, xAdvance1);
                }
            }
        }
    }
}
