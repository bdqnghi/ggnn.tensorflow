protected final short loadShort(int baseOffset) {
    short bytes = 0;
    if (order == Endianness.BIG_ENDIAN) {
        bytes = (short) (byteArray.get(baseOffset) << 8);
        bytes |= (byteArray.get(baseOffset + 1) & 0xFF);
    } else {
        bytes = (short) (byteArray.get(baseOffset + 1) << 8);
        bytes |= (byteArray.get(baseOffset) & 0xFF);
    }
    return bytes;
}
