public int readUnsignedByte() throws IOException {
    int b = read();
    if (b == -1)
        throw new EOFException("Unexpected end of file.");
    return b;
}
