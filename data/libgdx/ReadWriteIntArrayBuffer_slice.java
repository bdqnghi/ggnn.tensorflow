public IntBuffer slice() {
    return new ReadWriteIntArrayBuffer(remaining(), backingArray, offset + position);
}
