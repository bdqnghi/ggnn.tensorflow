public static String bytesToString(byte[] data, int len) {
    char[] chars = new char[len];
    for (int i = 0; i < len; i++) {
        chars[i] = (char) data[i];
    }
    return new String(chars);
}
