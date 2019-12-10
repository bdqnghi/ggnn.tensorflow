ByteBuffer orderImpl(ByteOrder byteOrder) {
    order = byteOrder == ByteOrder.BIG_ENDIAN ? Endianness.BIG_ENDIAN : Endianness.LITTLE_ENDIAN;
    return this;
}
