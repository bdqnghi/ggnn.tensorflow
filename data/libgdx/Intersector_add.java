void add(float[] vertex, int offset, int stride) {
    if (frontCurrent) {
        System.arraycopy(vertex, offset, front, frontOffset, stride);
        frontOffset += stride;
    } else {
        System.arraycopy(vertex, offset, back, backOffset, stride);
        backOffset += stride;
    }
}
