public void set(int index, T value) {
    if (iterating > 0)
        throw new IllegalStateException("Invalid between begin/end.");
    super.set(index, value);
}
