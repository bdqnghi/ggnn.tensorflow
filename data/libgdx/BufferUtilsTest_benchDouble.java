private void benchDouble() {
    DoubleBuffer db = BufferUtils.newDoubleBuffer(1024 * 1024 / 8);
    double[] doubles = new double[1024 * 1024 / 8];
    int len = doubles.length;
    // relative put
    long start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        db.clear();
        for (int i = 0; i < len; i++) db.put(doubles[i]);
    }
    Gdx.app.log("BufferUtilsTest", "DoubleBuffer relative put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // absolute put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        db.clear();
        for (int i = 0; i < len; i++) db.put(i, doubles[i]);
    }
    Gdx.app.log("BufferUtilsTest", "DoubleBuffer absolute put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // bulk put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        db.clear();
        db.put(doubles);
    }
    Gdx.app.log("BufferUtilsTest", "DoubleBuffer bulk put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // JNI put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        db.clear();
        BufferUtils.copy(doubles, 0, db, len);
    }
    Gdx.app.log("BufferUtilsTest", "DoubleBuffer bulk put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
}
