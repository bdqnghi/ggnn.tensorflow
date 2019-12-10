private static void check(boolean condition, String msg) {
    if (!condition)
        throw new GdxRuntimeException(msg);
}
