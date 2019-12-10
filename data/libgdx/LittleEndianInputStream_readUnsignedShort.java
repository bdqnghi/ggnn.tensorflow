public int readUnsignedShort() throws IOException {
    int low = din.read();
    int high = din.read();
    return ((high & 0xff) << 8) | (low & 0xff);
}
