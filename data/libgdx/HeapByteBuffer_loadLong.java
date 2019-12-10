protected final long loadLong(int index) {
    int baseOffset = offset + index;
    long bytes = 0;
    if (order == Endianness.BIG_ENDIAN) {
        for (int i = 0; i < 8; i++) {
            bytes = bytes << 8;
            bytes = bytes | (backingArray[baseOffset + i] & 0xFF);
        }
    } else {
        for (int i = 7; i >= 0; i--) {
            bytes = bytes << 8;
            bytes = bytes | (backingArray[baseOffset + i] & 0xFF);
        }
    }
    return bytes;
}
