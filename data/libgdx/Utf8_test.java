public static boolean test(Object data) {
    if (!(data instanceof byte[]))
        return false;
    byte[] b = (byte[]) data;
    for (int i = 0; i < b.length; ++i) {
        if (((int) b[i] & 0x080) != 0)
            return true;
    }
    return false;
}
