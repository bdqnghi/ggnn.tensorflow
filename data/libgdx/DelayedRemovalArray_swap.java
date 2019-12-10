public void swap(int first, int second) {
    if (iterating > 0)
        throw new IllegalStateException("Invalid between begin/end.");
    super.swap(first, second);
}
