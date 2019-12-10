private void benchShort() {
    ShortBuffer sb = BufferUtils.newShortBuffer(1024 * 1024 / 2);
    short[] shorts = new short[1024 * 1024 / 2];
    int len = shorts.length;
    // relative put
    long start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        sb.clear();
        for (int i = 0; i < len; i++) sb.put(shorts[i]);
    }
    Gdx.app.log("BufferUtilsTest", "ShortBuffer relative put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // absolute put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        sb.clear();
        for (int i = 0; i < len; i++) sb.put(i, shorts[i]);
    }
    Gdx.app.log("BufferUtilsTest", "ShortBuffer absolute put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // bulk put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        sb.clear();
        sb.put(shorts);
    }
    Gdx.app.log("BufferUtilsTest", "ShortBuffer bulk put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // JNI put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        sb.clear();
        BufferUtils.copy(shorts, 0, sb, len);
    }
    Gdx.app.log("BufferUtilsTest", "ShortBuffer native bulk put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
}
