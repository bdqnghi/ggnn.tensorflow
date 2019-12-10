protected int readUShort(final DataInputStream din) throws IOException {
    return ((int) din.readShort() & 0xFFFF);
}
