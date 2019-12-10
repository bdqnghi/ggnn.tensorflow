public boolean put(T value) {
    int write = writeIndex.get();
    int read = readIndex.get();
    int next = next(write);
    if (next == read)
        return false;
    queue.set(write, value);
    writeIndex.set(next);
    return true;
}
