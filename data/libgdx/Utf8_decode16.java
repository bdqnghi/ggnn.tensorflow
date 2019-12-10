public static char[] decode16(byte[] s8, int offset, int length) {
    Object decoded = decode(s8, offset, length);
    if (decoded instanceof char[])
        return (char[]) decoded;
    return (char[]) widen(decoded, length, length);
}
