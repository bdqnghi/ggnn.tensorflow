public void truncate(int newSize) {
    if (iterating > 0)
        throw new IllegalStateException("Invalid between begin/end.");
    super.truncate(newSize);
}
