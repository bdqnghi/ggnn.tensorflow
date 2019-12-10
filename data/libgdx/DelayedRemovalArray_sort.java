public void sort(Comparator<? super T> comparator) {
    if (iterating > 0)
        throw new IllegalStateException("Invalid between begin/end.");
    super.sort(comparator);
}
