protected String readString(final DataInputStream din, final long size) throws IOException {
    final byte[] data = new byte[(int) size];
    din.readFully(data);
    return new String(data, "UTF-8");
}
