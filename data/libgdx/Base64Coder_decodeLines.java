/**
 * Decodes a byte array from Base64 format and ignores line separators, tabs and blanks. CR, LF, Tab and Space characters are
 * ignored in the input data. This method is compatible with <code>sun.misc.BASE64Decoder.decodeBuffer(String)</code>.
 * @param s A Base64 String to be decoded.
 * @param inverseCharMap
 * @return An array containing the decoded data bytes.
 * @throws IllegalArgumentException If the input is not valid Base64 encoded data.
 */
public static byte[] decodeLines(String s, byte[] inverseCharMap) {
    char[] buf = new char[s.length()];
    int p = 0;
    for (int ip = 0; ip < s.length(); ip++) {
        char c = s.charAt(ip);
        if (c != ' ' && c != '\r' && c != '\n' && c != '\t') {
            buf[p++] = c;
        }
    }
    return decode(buf, 0, p, inverseCharMap);
}
