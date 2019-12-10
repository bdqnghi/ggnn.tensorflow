private void benchFloat() {
    FloatBuffer fb = BufferUtils.newFloatBuffer(1024 * 1024 / 4);
    float[] floats = new float[1024 * 1024 / 4];
    int len = floats.length;
    // relative put
    long start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        fb.clear();
        for (int i = 0; i < len; i++) fb.put(floats[i]);
    }
    Gdx.app.log("BufferUtilsTest", "FloatBuffer relative put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // absolute put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        fb.clear();
        for (int i = 0; i < len; i++) fb.put(i, floats[i]);
    }
    Gdx.app.log("BufferUtilsTest", "FloatBuffer absolute put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // bulk put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        fb.clear();
        fb.put(floats);
    }
    Gdx.app.log("BufferUtilsTest", "FloatBuffer bulk put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // JNI put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        fb.clear();
        BufferUtils.copy(floats, 0, fb, len);
    }
    Gdx.app.log("BufferUtilsTest", "FloatBuffer native bulk put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
}
