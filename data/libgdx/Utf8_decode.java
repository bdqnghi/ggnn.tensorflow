public static Object decode(byte[] s8, int offset, int length) {
    Object buf = new byte[length];
    boolean isMultiByte = false;
    int i = offset, j = 0;
    while (i < offset + length) {
        int x = s8[i++];
        if ((x & 0x080) == 0x0) {
            // 2 byte null char
            if (x == 0)
                ++i;
            cram(buf, j++, x);
        } else if ((x & 0x0e0) == 0x0c0) {
            // 2 byte char
            if (!isMultiByte) {
                buf = widen(buf, j, length - 1);
                isMultiByte = true;
            }
            int y = s8[i++];
            cram(buf, j++, ((x & 0x1f) << 6) | (y & 0x3f));
        } else if ((x & 0x0f0) == 0x0e0) {
            // 3 byte char
            if (!isMultiByte) {
                buf = widen(buf, j, length - 2);
                isMultiByte = true;
            }
            int y = s8[i++];
            int z = s8[i++];
            cram(buf, j++, ((x & 0xf) << 12) | ((y & 0x3f) << 6) | (z & 0x3f));
        }
    }
    return trim(buf, j);
}
