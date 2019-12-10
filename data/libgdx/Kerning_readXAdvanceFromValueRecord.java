private int readXAdvanceFromValueRecord(int valueFormat) throws IOException {
    int xAdvance = 0;
    for (int mask = 1; mask <= 0x8000 && mask <= valueFormat; mask <<= 1) {
        if ((valueFormat & mask) != 0) {
            int value = (int) input.readShort();
            if (mask == 0x0004) {
                xAdvance = value;
            }
        }
    }
    return xAdvance;
}
