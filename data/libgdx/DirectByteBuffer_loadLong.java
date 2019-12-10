protected final long loadLong(int baseOffset) {
    long bytes = 0;
    if (order == Endianness.BIG_ENDIAN) {
        for (int i = 0; i < 8; i++) {
            bytes = bytes << 8;
            bytes = bytes | (byteArray.get(baseOffset + i) & 0xFF);
        }
    } else {
        for (int i = 7; i >= 0; i--) {
            bytes = bytes << 8;
            bytes = bytes | (byteArray.get(baseOffset + i) & 0xFF);
        }
    }
    return bytes;
}
