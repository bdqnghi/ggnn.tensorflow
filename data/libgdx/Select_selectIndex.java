public <T> int selectIndex(T[] items, Comparator<T> comp, int kthLowest, int size) {
    if (size < 1) {
        throw new GdxRuntimeException("cannot select from empty array (size < 1)");
    } else if (kthLowest > size) {
        throw new GdxRuntimeException("Kth rank is larger than size. k: " + kthLowest + ", size: " + size);
    }
    int idx;
    // naive partial selection sort almost certain to outperform quickselect where n is min or max
    if (kthLowest == 1) {
        // find min
        idx = fastMin(items, comp, size);
    } else if (kthLowest == size) {
        // find max
        idx = fastMax(items, comp, size);
    } else {
        // quickselect a better choice for cases of k between min and max
        if (quickSelect == null)
            quickSelect = new QuickSelect();
        idx = quickSelect.select(items, comp, kthLowest, size);
    }
    return idx;
}
