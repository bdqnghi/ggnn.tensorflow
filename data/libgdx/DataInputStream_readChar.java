public char readChar() throws IOException {
    int a = is.read();
    int b = readUnsignedByte();
    return (char) ((a << 8) | b);
}
