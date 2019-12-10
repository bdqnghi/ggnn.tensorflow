public FloatBuffer slice() {
    return new ReadOnlyFloatArrayBuffer(remaining(), backingArray, offset + position);
}
