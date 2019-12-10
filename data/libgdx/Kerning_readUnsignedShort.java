public int readUnsignedShort() throws IOException {
    return (readUnsignedByte() << 8) + readUnsignedByte();
}
