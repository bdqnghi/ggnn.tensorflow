public static int hexToBytes(String hex, byte[] data) {
    int len = hex.length();
    for (int i = 0; i < len; i += 2) {
        data[i >> 1] = (byte) ((Character.digit(hex.charAt(i), 16) << 4) | Character.digit(hex.charAt(i + 1), 16));
    }
    return len / 2;
}
