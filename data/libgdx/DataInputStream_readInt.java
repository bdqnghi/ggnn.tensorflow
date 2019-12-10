public int readInt() throws IOException {
    int a = is.read();
    int b = is.read();
    int c = is.read();
    int d = readUnsignedByte();
    return (a << 24) | (b << 16) | (c << 8) | d;
}
