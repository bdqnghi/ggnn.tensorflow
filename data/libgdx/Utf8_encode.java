public static byte[] encode(char[] s16, int offset, int length) {
    ByteArrayOutputStream buf = new ByteArrayOutputStream();
    for (int i = offset; i < offset + length; ++i) {
        char c = s16[i];
        if (c == '\u0000') {
            // null char
            buf.write(0);
            buf.write(0);
        } else if (c < 0x080) {
            // 1 byte char
            buf.write(c);
        } else if (c < 0x0800) {
            // 2 byte char
            buf.write(0x0c0 | (c >>> 6));
            buf.write(0x080 | (c & 0x03f));
        } else {
            // 3 byte char
            buf.write(0x0e0 | ((c >>> 12) & 0x0f));
            buf.write(0x080 | ((c >>> 6) & 0x03f));
            buf.write(0x080 | (c & 0x03f));
        }
    }
    return buf.toByteArray();
}
