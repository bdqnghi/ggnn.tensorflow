public void reverse() {
    if (iterating > 0)
        throw new IllegalStateException("Invalid between begin/end.");
    super.reverse();
}
