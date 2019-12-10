public static int stringToBytes(String s, byte[] data) {
    int len = s.length();
    for (int i = 0; i < len; i++) {
        data[i] = (byte) s.charAt(i);
    }
    return len;
}
