private void checkInt(long val1, long val2) {
    if (val1 != val2) {
        Gdx.app.error("BufferUtilsTest", "checkInt failed: " + val1 + " != " + val2);
        throw new GdxRuntimeException("Error, val1 != val2");
    }
}
