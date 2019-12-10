protected final short loadShort(int index) {
    int baseOffset = offset + index;
    short bytes = 0;
    if (order == Endianness.BIG_ENDIAN) {
        bytes = (short) (backingArray[baseOffset] << 8);
        bytes |= (backingArray[baseOffset + 1] & 0xFF);
    } else {
        bytes = (short) (backingArray[baseOffset + 1] << 8);
        bytes |= (backingArray[baseOffset] & 0xFF);
    }
    return bytes;
}
