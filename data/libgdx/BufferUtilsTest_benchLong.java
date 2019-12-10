private void benchLong() {
    LongBuffer lb = BufferUtils.newLongBuffer(1024 * 1024 / 8);
    long[] longs = new long[1024 * 1024 / 8];
    int len = longs.length;
    // relative put
    long start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        lb.clear();
        for (int i = 0; i < len; i++) lb.put(longs[i]);
    }
    Gdx.app.log("BufferUtilsTest", "LongBuffer relative put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // absolute put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        lb.clear();
        for (int i = 0; i < len; i++) lb.put(i, longs[i]);
    }
    Gdx.app.log("BufferUtilsTest", "LongBuffer absolute put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // bulk put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        lb.clear();
        lb.put(longs);
    }
    Gdx.app.log("BufferUtilsTest", "LongBuffer bulk put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // JNI put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        lb.clear();
        BufferUtils.copy(longs, 0, lb, len);
    }
    Gdx.app.log("BufferUtilsTest", "LongBuffer native bulk put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
}
