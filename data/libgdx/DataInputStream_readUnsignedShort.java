public int readUnsignedShort() throws IOException {
    int a = is.read();
    int b = readUnsignedByte();
    return ((a << 8) | b);
}
