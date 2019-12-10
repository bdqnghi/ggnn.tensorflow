/**
 * Encodes a byte array into Base 64 format and breaks the output into lines.
 * @param in An array containing the data bytes to be encoded.
 * @param iOff Offset of the first byte in <code>in</code> to be processed.
 * @param iLen Number of bytes to be processed in <code>in</code>, starting at <code>iOff</code>.
 * @param lineLen Line length for the output data. Should be a multiple of 4.
 * @param lineSeparator The line separator to be used to separate the output lines.
 * @param charMap char map to use
 * @return A String containing the Base64 encoded data, broken into lines.
 */
public static String encodeLines(byte[] in, int iOff, int iLen, int lineLen, String lineSeparator, char[] charMap) {
    int blockLen = (lineLen * 3) / 4;
    if (blockLen <= 0) {
        throw new IllegalArgumentException();
    }
    int lines = (iLen + blockLen - 1) / blockLen;
    int bufLen = ((iLen + 2) / 3) * 4 + lines * lineSeparator.length();
    StringBuilder buf = new StringBuilder(bufLen);
    int ip = 0;
    while (ip < iLen) {
        int l = Math.min(iLen - ip, blockLen);
        buf.append(encode(in, iOff + ip, l, charMap));
        buf.append(lineSeparator);
        ip += l;
    }
    return buf.toString();
}
