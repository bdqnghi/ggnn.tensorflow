public short readShort() throws IOException {
    int low = din.read();
    int high = din.read();
    return (short) ((high << 8) | (low & 0xff));
}
