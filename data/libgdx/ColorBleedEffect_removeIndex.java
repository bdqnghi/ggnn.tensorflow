int removeIndex(int index) {
    if (index >= pendingSize)
        throw new IndexOutOfBoundsException(String.valueOf(index));
    int value = pending[index];
    pendingSize--;
    pending[index] = pending[pendingSize];
    return value;
}
