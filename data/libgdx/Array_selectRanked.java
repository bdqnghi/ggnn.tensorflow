/**
 * Selects the nth-lowest element from the Array according to Comparator ranking. This might partially sort the Array. The
 * array must have a size greater than 0, or a {@link com.badlogic.gdx.utils.GdxRuntimeException} will be thrown.
 * @see Select
 * @param comparator used for comparison
 * @param kthLowest rank of desired object according to comparison, n is based on ordinal numbers, not array indices. for min
 *           value use 1, for max value use size of array, using 0 results in runtime exception.
 * @return the value of the Nth lowest ranked object.
 */
public T selectRanked(Comparator<T> comparator, int kthLowest) {
    if (kthLowest < 1) {
        throw new GdxRuntimeException("nth_lowest must be greater than 0, 1 = first, 2 = second...");
    }
    return Select.instance().select(items, comparator, kthLowest, size);
}
