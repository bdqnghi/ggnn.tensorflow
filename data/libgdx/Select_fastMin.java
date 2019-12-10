/**
 * Faster than quickselect for n = min
 */
private <T> int fastMin(T[] items, Comparator<T> comp, int size) {
    int lowestIdx = 0;
    for (int i = 1; i < size; i++) {
        int comparison = comp.compare(items[i], items[lowestIdx]);
        if (comparison < 0) {
            lowestIdx = i;
        }
    }
    return lowestIdx;
}
