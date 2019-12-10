public T pop() {
    if (iterating > 0)
        throw new IllegalStateException("Invalid between begin/end.");
    return super.pop();
}
