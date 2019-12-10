/**
 * Sorts the specified portion of the specified array using a binary insertion sort. This is the best method for sorting small
 * numbers of elements. It requires O(n log n) compares, but O(n^2) data movement (worst case).
 *
 * If the initial part of the specified range is already sorted, this method can take advantage of it: the method assumes that
 * the elements from index {@code lo}, inclusive, to {@code start}, exclusive are already sorted.
 *
 * @param a the array in which a range is to be sorted
 * @param lo the index of the first element in the range to be sorted
 * @param hi the index after the last element in the range to be sorted
 * @param start the index of the first element in the range that is not already known to be sorted (@code lo <= start <= hi}
 */
@SuppressWarnings("fallthrough")
private static void binarySort(Object[] a, int lo, int hi, int start) {
    if (DEBUG)
        assert lo <= start && start <= hi;
    if (start == lo)
        start++;
    for (; start < hi; start++) {
        @SuppressWarnings("unchecked")
        Comparable<Object> pivot = (Comparable) a[start];
        // Set left (and right) to the index where a[start] (pivot) belongs
        int left = lo;
        int right = start;
        if (DEBUG)
            assert left <= right;
        /*
			 * Invariants: pivot >= all in [lo, left). pivot < all in [right, start).
			 */
        while (left < right) {
            int mid = (left + right) >>> 1;
            if (pivot.compareTo(a[mid]) < 0)
                right = mid;
            else
                left = mid + 1;
        }
        if (DEBUG)
            assert left == right;
        /*
			 * The invariants still hold: pivot >= all in [lo, left) and pivot < all in [left, start), so pivot belongs at left. Note
			 * that if there are elements equal to pivot, left points to the first slot after them -- that's why this sort is stable.
			 * Slide elements over to make room to make room for pivot.
			 */
        // The number of elements to move
        int n = start - left;
        // Switch is just an optimization for arraycopy in default case
        switch(n) {
            case 2:
                a[left + 2] = a[left + 1];
            case 1:
                a[left + 1] = a[left];
                break;
            default:
                System.arraycopy(a, left, a, left + 1, n);
        }
        a[left] = pivot;
    }
}
