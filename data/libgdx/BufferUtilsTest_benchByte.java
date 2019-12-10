private void benchByte() {
    ByteBuffer bb = BufferUtils.newByteBuffer(1024 * 1024);
    byte[] bytes = new byte[1024 * 1024];
    int len = bytes.length;
    final int NUM_MB = 5;
    // relative put
    long start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        bb.clear();
        for (int i = 0; i < len; i++) bb.put(bytes[i]);
    }
    Gdx.app.log("BufferUtilsTest", "ByteBuffer relative put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // absolute put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        bb.clear();
        for (int i = 0; i < len; i++) bb.put(i, bytes[i]);
    }
    Gdx.app.log("BufferUtilsTest", "ByteBuffer absolute put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // bulk put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        bb.clear();
        bb.put(bytes);
    }
    Gdx.app.log("BufferUtilsTest", "ByteBuffer bulk put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    // JNI put
    start = TimeUtils.nanoTime();
    for (int j = 0; j < NUM_MB; j++) {
        bb.clear();
        BufferUtils.copy(bytes, 0, bb, len);
    }
    Gdx.app.log("BufferUtilsTest", "ByteBuffer native bulk put: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
}
