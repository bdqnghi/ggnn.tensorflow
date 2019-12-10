private static Object widen(Object data, int length, int capacity) {
    byte[] src = (byte[]) data;
    char[] result = new char[capacity];
    for (int i = 0; i < length; ++i) result[i] = (char) ((int) src[i] & 0x0ff);
    return result;
}
