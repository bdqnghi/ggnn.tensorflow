private void checkFloat(double val1, double val2) {
    if (val1 != val2) {
        Gdx.app.error("BufferUtilsTest", "checkFloat failed: " + val1 + " != " + val2);
        throw new GdxRuntimeException("Error, val1 != val2");
    }
}
