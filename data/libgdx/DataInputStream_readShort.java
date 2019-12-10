public short readShort() throws IOException {
    int a = is.read();
    int b = readUnsignedByte();
    return (short) ((a << 8) | b);
}
