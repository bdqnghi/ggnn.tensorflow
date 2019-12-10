public void end() {
    if (iterating == 0)
        throw new IllegalStateException("begin must be called before end.");
    iterating--;
    if (iterating == 0) {
        for (int i = 0, n = remove.size; i < n; i++) removeIndex(remove.pop());
    }
}
