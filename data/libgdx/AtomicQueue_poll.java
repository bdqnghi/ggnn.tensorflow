public T poll() {
    int read = readIndex.get();
    int write = writeIndex.get();
    if (read == write)
        return null;
    T value = queue.get(read);
    readIndex.set(next(read));
    return value;
}
