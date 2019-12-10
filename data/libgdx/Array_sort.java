/**
 * Sorts the array. This method is not thread safe (uses {@link Sort#instance()}).
 */
public void sort(Comparator<? super T> comparator) {
    Sort.instance().sort(items, comparator, 0, size);
}
