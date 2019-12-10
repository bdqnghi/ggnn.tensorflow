public ByteBuffer compact() {
    // System.arraycopy(backingArray, position + offset, backingArray, offset,
    // remaining());
    int rem = remaining();
    for (int i = 0; i < rem; i++) {
        byteArray.set(i, byteArray.get(position + i));
    }
    position = limit - position;
    limit = capacity;
    mark = UNSET_MARK;
    return this;
}
