private static void cram(Object data, int index, int val) {
    if (data instanceof byte[])
        ((byte[]) data)[index] = (byte) val;
    else
        ((char[]) data)[index] = (char) val;
}
