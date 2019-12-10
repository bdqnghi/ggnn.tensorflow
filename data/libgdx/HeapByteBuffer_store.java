protected final void store(int index, short value) {
    int baseOffset = offset + index;
    if (order == Endianness.BIG_ENDIAN) {
        backingArray[baseOffset] = (byte) ((value >> 8) & 0xFF);
        backingArray[baseOffset + 1] = (byte) (value & 0xFF);
    } else {
        backingArray[baseOffset + 1] = (byte) ((value >> 8) & 0xFF);
        backingArray[baseOffset] = (byte) (value & 0xFF);
    }
}
