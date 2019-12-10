/**
 * Faster than quickselect for n = max
 */
private <T> int fastMax(T[] items, Comparator<T> comp, int size) {
    int highestIdx = 0;
    for (int i = 1; i < size; i++) {
        int comparison = comp.compare(items[i], items[highestIdx]);
        if (comparison > 0) {
            highestIdx = i;
        }
    }
    return highestIdx;
}
