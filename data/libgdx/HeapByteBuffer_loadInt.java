protected final int loadInt(int index) {
    int baseOffset = offset + index;
    int bytes = 0;
    if (order == Endianness.BIG_ENDIAN) {
        for (int i = 0; i < 4; i++) {
            bytes = bytes << 8;
            bytes = bytes | (backingArray[baseOffset + i] & 0xFF);
        }
    } else {
        for (int i = 3; i >= 0; i--) {
            bytes = bytes << 8;
            bytes = bytes | (backingArray[baseOffset + i] & 0xFF);
        }
    }
    return bytes;
}
