private void benchInt() {
    IntBuffer ib = BufferUtils.newIntBuffer(1024 * 1024 / 4);
    int[] ints = new int[1024 * 1024 / 4];
    int len = ints.length;
    // relative put
    long start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        ib.clear();
        for (int i = 0; i < len; i++) ib.put(ints[i]);
    }
    Gdx.app.log("BufferUtilsTest", "IntBuffer relative put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // absolute put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        ib.clear();
        for (int i = 0; i < len; i++) ib.put(i, ints[i]);
    }
    Gdx.app.log("BufferUtilsTest", "IntBuffer absolute put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // bulk put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        ib.clear();
        ib.put(ints);
    }
    Gdx.app.log("BufferUtilsTest", "IntBuffer bulk put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // JNI put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        ib.clear();
        BufferUtils.copy(ints, 0, ib, len);
    }
    Gdx.app.log("BufferUtilsTest", "IntBuffer native bulk put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
}
