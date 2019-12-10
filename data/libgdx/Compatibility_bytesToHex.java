public static String bytesToHex(byte[] data, int len) {
    char[] hex = new char[len * 2];
    for (int i = 0; i < len; i++) {
        int di = data[i];
        hex[i << 1] = Character.forDigit((di >> 4) & 15, 16);
        hex[(i << 1) + 1] = Character.forDigit(di & 15, 16);
    }
    return new String(hex);
}
