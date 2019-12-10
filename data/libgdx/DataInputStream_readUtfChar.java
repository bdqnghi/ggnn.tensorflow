private int readUtfChar(StringBuilder sb) throws IOException {
    int a = readUnsignedByte();
    if ((a & 0x80) == 0) {
        sb.append((char) a);
        return 1;
    }
    if ((a & 0xe0) == 0xc0) {
        int b = readUnsignedByte();
        sb.append((char) (((a & 0x1F) << 6) | (b & 0x3F)));
        return 2;
    }
    if ((a & 0xf0) == 0xe0) {
        int b = readUnsignedByte();
        int c = readUnsignedByte();
        sb.append((char) (((a & 0x0F) << 12) | ((b & 0x3F) << 6) | (c & 0x3F)));
        return 3;
    }
    throw new UTFDataFormatException();
}
