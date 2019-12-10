public FloatBuffer slice() {
    return new ReadWriteFloatArrayBuffer(remaining(), backingArray, offset + position);
}
