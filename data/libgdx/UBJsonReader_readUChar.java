protected short readUChar(final DataInputStream din) throws IOException {
    return (short) ((short) din.readByte() & 0xFF);
}
