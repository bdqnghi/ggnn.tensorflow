public <T> void sort(T[] a, Comparator<? super T> c, int fromIndex, int toIndex) {
    if (timSort == null)
        timSort = new TimSort();
    timSort.doSort(a, c, fromIndex, toIndex);
}
