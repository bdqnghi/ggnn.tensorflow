protected final short loadShort(int baseOffset) {
    short bytes = 0;
    bytes = (short) (get(baseOffset + 1) << 8);
    bytes |= (get(baseOffset) & 0xFF);
    return bytes;
}
