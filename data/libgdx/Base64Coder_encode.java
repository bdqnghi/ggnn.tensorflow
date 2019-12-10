/**
 * Encodes a byte array into Base64 format. No blanks or line breaks are inserted in the output.
 * @param in An array containing the data bytes to be encoded.
 * @param iOff Offset of the first byte in <code>in</code> to be processed.
 * @param iLen Number of bytes to process in <code>in</code>, starting at <code>iOff</code>.
 * @param charMap char map to use
 * @return A character array containing the Base64 encoded data.
 */
public static char[] encode(byte[] in, int iOff, int iLen, char[] charMap) {
    // output length without padding
    int oDataLen = (iLen * 4 + 2) / 3;
    // output length including padding
    int oLen = ((iLen + 2) / 3) * 4;
    char[] out = new char[oLen];
    int ip = iOff;
    int iEnd = iOff + iLen;
    int op = 0;
    while (ip < iEnd) {
        int i0 = in[ip++] & 0xff;
        int i1 = ip < iEnd ? in[ip++] & 0xff : 0;
        int i2 = ip < iEnd ? in[ip++] & 0xff : 0;
        int o0 = i0 >>> 2;
        int o1 = ((i0 & 3) << 4) | (i1 >>> 4);
        int o2 = ((i1 & 0xf) << 2) | (i2 >>> 6);
        int o3 = i2 & 0x3F;
        out[op++] = charMap[o0];
        out[op++] = charMap[o1];
        out[op] = op < oDataLen ? charMap[o2] : '=';
        op++;
        out[op] = op < oDataLen ? charMap[o3] : '=';
        op++;
    }
    return out;
}
