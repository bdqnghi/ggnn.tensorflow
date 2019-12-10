protected long readUInt(final DataInputStream din) throws IOException {
    return ((long) din.readInt() & 0xFFFFFFFF);
}
