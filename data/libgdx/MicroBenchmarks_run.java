@Override
public void run() {
    ByteBuffer buffer = ByteBuffer.allocateDirect(1024 * 1024 * Float.SIZE / 8);
    buffer.order(ByteOrder.nativeOrder());
    FloatBuffer floatBuffer = buffer.asFloatBuffer();
    IntBuffer intBuffer = buffer.asIntBuffer();
    float[] floatArray = new float[1024 * 1024];
    int[] intArray = new int[1024 * 1024];
    // single put
    tic();
    for (int tries = 0; tries < TRIES; tries++) {
        for (int i = 0; i < floatArray.length; i++) floatBuffer.put(floatArray[i]);
        floatBuffer.clear();
    }
    toc("single put");
    // single indexed put
    tic();
    for (int tries = 0; tries < TRIES; tries++) {
        for (int i = 0; i < floatArray.length; i++) floatBuffer.put(i, floatArray[i]);
        floatBuffer.clear();
    }
    toc("single indexed put");
    // bulk put
    tic();
    for (int tries = 0; tries < TRIES; tries++) {
        floatBuffer.put(floatArray);
        floatBuffer.clear();
    }
    toc("vector put");
    // convert bulk put
    tic();
    for (int tries = 0; tries < TRIES; tries++) {
        for (int i = 0; i < floatArray.length; i++) intArray[i] = Float.floatToIntBits(floatArray[i]);
        intBuffer.put(intArray);
        intBuffer.clear();
    }
    toc("convert bulk put");
    // jni bulk put
    tic();
    for (int tries = 0; tries < TRIES; tries++) {
        BufferUtils.copy(floatArray, floatBuffer, floatArray.length, 0);
        floatBuffer.clear();
    }
    toc("jni bulk put");
}
