public Iterator<T> iterator() {
    // new Throwable().printStackTrace(new java.io.PrintWriter(lastAcquire));
    if (iterator1 == null) {
        iterator1 = new QueueIterator(queue, allowRemove);
        iterator2 = new QueueIterator(queue, allowRemove);
    // iterator1.iterable = this;
    // iterator2.iterable = this;
    }
    if (!iterator1.valid) {
        iterator1.index = 0;
        iterator1.valid = true;
        iterator2.valid = false;
        return iterator1;
    }
    iterator2.index = 0;
    iterator2.valid = true;
    iterator1.valid = false;
    return iterator2;
}
