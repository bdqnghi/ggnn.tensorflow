/**
 * Returns the length of the run beginning at the specified position in the specified array and reverses the run if it is
 * descending (ensuring that the run will always be ascending when the method returns).
 *
 * A run is the longest ascending sequence with:
 *
 * a[lo] <= a[lo + 1] <= a[lo + 2] <= ...
 *
 * or the longest descending sequence with:
 *
 * a[lo] > a[lo + 1] > a[lo + 2] > ...
 *
 * For its intended use in a stable mergesort, the strictness of the definition of "descending" is needed so that the call can
 * safely reverse a descending sequence without violating stability.
 *
 * @param a the array in which a run is to be counted and possibly reversed
 * @param lo index of the first element in the run
 * @param hi index after the last element that may be contained in the run. It is required that @code{lo < hi}.
 * @param c the comparator to used for the sort
 * @return the length of the run beginning at the specified position in the specified array
 */
private static <T> int countRunAndMakeAscending(T[] a, int lo, int hi, Comparator<? super T> c) {
    if (DEBUG)
        assert lo < hi;
    int runHi = lo + 1;
    if (runHi == hi)
        return 1;
    // Find end of run, and reverse range if descending
    if (c.compare(a[runHi++], a[lo]) < 0) {
        // Descending
        while (runHi < hi && c.compare(a[runHi], a[runHi - 1]) < 0) runHi++;
        reverseRange(a, lo, runHi);
    } else {
        // Ascending
        while (runHi < hi && c.compare(a[runHi], a[runHi - 1]) >= 0) runHi++;
    }
    return runHi - lo;
}
