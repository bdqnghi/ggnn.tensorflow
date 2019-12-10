static FloatBuffer toBuffer(float[] src, int offset) {
    int n = src.length - offset;
    ensureSize(n * 4);
    bufferFloat.position(0);
    bufferFloat.put(src, offset, n);
    return bufferFloat;
}
