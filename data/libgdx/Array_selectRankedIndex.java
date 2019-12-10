/**
 * @see Array#selectRanked(java.util.Comparator, int)
 * @param comparator used for comparison
 * @param kthLowest rank of desired object according to comparison, n is based on ordinal numbers, not array indices. for min
 *           value use 1, for max value use size of array, using 0 results in runtime exception.
 * @return the index of the Nth lowest ranked object.
 */
public int selectRankedIndex(Comparator<T> comparator, int kthLowest) {
    if (kthLowest < 1) {
        throw new GdxRuntimeException("nth_lowest must be greater than 0, 1 = first, 2 = second...");
    }
    return Select.instance().selectIndex(items, comparator, kthLowest, size);
}
