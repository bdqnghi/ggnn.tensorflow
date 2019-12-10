static void toArray(FloatBuffer src, float[] dst, int offset) {
    src.position(0);
    src.get(dst, offset, dst.length - offset);
}
