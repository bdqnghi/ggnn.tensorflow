/**
 * Decodes a byte array from Base64 format. No blanks or line breaks are allowed within the Base64 encoded input data.
 * @param in A character array containing the Base64 encoded data.
 * @param iOff Offset of the first character in <code>in</code> to be processed.
 * @param iLen Number of characters to process in <code>in</code>, starting at <code>iOff</code>.
 * @param inverseCharMap charMap to use
 * @return An array containing the decoded data bytes.
 * @throws IllegalArgumentException If the input is not valid Base64 encoded data.
 */
public static byte[] decode(char[] in, int iOff, int iLen, byte[] inverseCharMap) {
    if (iLen % 4 != 0) {
        throw new IllegalArgumentException("Length of Base64 encoded input string is not a multiple of 4.");
    }
    while (iLen > 0 && in[iOff + iLen - 1] == '=') {
        iLen--;
    }
    int oLen = (iLen * 3) / 4;
    byte[] out = new byte[oLen];
    int ip = iOff;
    int iEnd = iOff + iLen;
    int op = 0;
    while (ip < iEnd) {
        int i0 = in[ip++];
        int i1 = in[ip++];
        int i2 = ip < iEnd ? in[ip++] : 'A';
        int i3 = ip < iEnd ? in[ip++] : 'A';
        if (i0 > 127 || i1 > 127 || i2 > 127 || i3 > 127) {
            throw new IllegalArgumentException("Illegal character in Base64 encoded data.");
        }
        int b0 = inverseCharMap[i0];
        int b1 = inverseCharMap[i1];
        int b2 = inverseCharMap[i2];
        int b3 = inverseCharMap[i3];
        if (b0 < 0 || b1 < 0 || b2 < 0 || b3 < 0) {
            throw new IllegalArgumentException("Illegal character in Base64 encoded data.");
        }
        int o0 = (b0 << 2) | (b1 >>> 4);
        int o1 = ((b1 & 0xf) << 4) | (b2 >>> 2);
        int o2 = ((b2 & 3) << 6) | b3;
        out[op++] = (byte) o0;
        if (op < oLen) {
            out[op++] = (byte) o1;
        }
        if (op < oLen) {
            out[op++] = (byte) o2;
        }
    }
    return out;
}
