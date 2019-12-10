protected long parseSize(final DataInputStream din, final byte type, final boolean useIntOnError, final long defaultValue) throws IOException {
    if (type == 'i')
        return (long) readUChar(din);
    if (type == 'I')
        return (long) readUShort(din);
    if (type == 'l')
        return (long) readUInt(din);
    if (type == 'L')
        return din.readLong();
    if (useIntOnError) {
        long result = (long) ((short) type & 0xFF) << 24;
        result |= (long) ((short) din.readByte() & 0xFF) << 16;
        result |= (long) ((short) din.readByte() & 0xFF) << 8;
        result |= (long) ((short) din.readByte() & 0xFF);
        return result;
    }
    return defaultValue;
}
