private static Object trim(Object data, int length) {
    if (data instanceof byte[])
        return data;
    if (((char[]) data).length == length)
        return data;
    char[] result = new char[length];
    System.arraycopy(data, 0, result, 0, length);
    return result;
}
