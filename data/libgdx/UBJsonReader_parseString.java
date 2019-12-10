protected String parseString(final DataInputStream din, final boolean sOptional, final byte type) throws IOException {
    long size = -1;
    if (type == 'S') {
        size = parseSize(din, true, -1);
    } else if (type == 's')
        size = (long) readUChar(din);
    else if (sOptional)
        size = parseSize(din, type, false, -1);
    if (size < 0)
        throw new GdxRuntimeException("Unrecognized data type, string expected");
    return size > 0 ? readString(din, size) : "";
}
