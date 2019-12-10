protected final int loadInt(int baseOffset) {
    int bytes = 0;
    for (int i = 3; i >= 0; i--) {
        bytes = bytes << 8;
        bytes = bytes | (get(baseOffset + i) & 0xFF);
    }
    return bytes;
}
