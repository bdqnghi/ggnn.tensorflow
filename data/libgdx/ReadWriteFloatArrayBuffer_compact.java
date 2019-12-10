public FloatBuffer compact() {
    // System.arraycopy(backingArray, position + offset, backingArray, offset, remaining());
    for (int i = position + offset, j = offset, k = 0; k < remaining(); i++, j++, k++) {
        backingArray[j] = backingArray[i];
    }
    position = limit - position;
    limit = capacity;
    mark = UNSET_MARK;
    return this;
}
