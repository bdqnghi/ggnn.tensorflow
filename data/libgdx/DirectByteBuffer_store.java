protected final void store(int baseOffset, short value) {
    if (order == Endianness.BIG_ENDIAN) {
        byteArray.set(baseOffset, (byte) ((value >> 8) & 0xFF));
        byteArray.set(baseOffset + 1, (byte) (value & 0xFF));
    } else {
        byteArray.set(baseOffset + 1, (byte) ((value >> 8) & 0xFF));
        byteArray.set(baseOffset, (byte) (value & 0xFF));
    }
}
