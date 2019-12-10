public T peek() {
    if (size == 0)
        throw new IllegalStateException("The heap is empty.");
    return (T) nodes[0];
}
