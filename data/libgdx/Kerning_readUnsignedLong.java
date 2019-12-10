public long readUnsignedLong() throws IOException {
    long value = readUnsignedByte();
    value = (value << 8) + readUnsignedByte();
    value = (value << 8) + readUnsignedByte();
    value = (value << 8) + readUnsignedByte();
    return value;
}
