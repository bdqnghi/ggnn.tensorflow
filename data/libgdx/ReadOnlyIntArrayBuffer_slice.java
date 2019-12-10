public IntBuffer slice() {
    return new ReadOnlyIntArrayBuffer(remaining(), backingArray, offset + position);
}
