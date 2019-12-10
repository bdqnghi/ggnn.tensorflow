int next() {
    if (index >= pendingSize)
        throw new NoSuchElementException(String.valueOf(index));
    return pending[index++];
}
