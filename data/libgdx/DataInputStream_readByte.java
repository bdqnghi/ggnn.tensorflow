public byte readByte() throws IOException {
    int i = read();
    if (i == -1) {
        throw new EOFException();
    }
    return (byte) i;
}
