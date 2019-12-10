/**
 * Locates the position at which to insert the specified key into the specified sorted range; if the range contains an element
 * equal to key, returns the index of the leftmost equal element.
 *
 * @param key the key whose insertion point to search for
 * @param a the array in which to search
 * @param base the index of the first element in the range
 * @param len the length of the range; must be > 0
 * @param hint the index at which to begin the search, 0 <= hint < n. The closer hint is to the result, the faster this method
 *           will run.
 * @param c the comparator used to order the range, and to search
 * @return the int k, 0 <= k <= n such that a[b + k - 1] < key <= a[b + k], pretending that a[b - 1] is minus infinity and a[b
 *         + n] is infinity. In other words, key belongs at index b + k; or in other words, the first k elements of a should
 *         precede key, and the last n - k should follow it.
 */
private static <T> int gallopLeft(T key, T[] a, int base, int len, int hint, Comparator<? super T> c) {
    if (DEBUG)
        assert len > 0 && hint >= 0 && hint < len;
    int lastOfs = 0;
    int ofs = 1;
    if (c.compare(key, a[base + hint]) > 0) {
        // Gallop right until a[base+hint+lastOfs] < key <= a[base+hint+ofs]
        int maxOfs = len - hint;
        while (ofs < maxOfs && c.compare(key, a[base + hint + ofs]) > 0) {
            lastOfs = ofs;
            ofs = (ofs << 1) + 1;
            if (// int overflow
            ofs <= 0)
                ofs = maxOfs;
        }
        if (ofs > maxOfs)
            ofs = maxOfs;
        // Make offsets relative to base
        lastOfs += hint;
        ofs += hint;
    } else {
        // key <= a[base + hint]
        // Gallop left until a[base+hint-ofs] < key <= a[base+hint-lastOfs]
        final int maxOfs = hint + 1;
        while (ofs < maxOfs && c.compare(key, a[base + hint - ofs]) <= 0) {
            lastOfs = ofs;
            ofs = (ofs << 1) + 1;
            if (// int overflow
            ofs <= 0)
                ofs = maxOfs;
        }
        if (ofs > maxOfs)
            ofs = maxOfs;
        // Make offsets relative to base
        int tmp = lastOfs;
        lastOfs = hint - ofs;
        ofs = hint - tmp;
    }
    if (DEBUG)
        assert -1 <= lastOfs && lastOfs < ofs && ofs <= len;
    /*
		 * Now a[base+lastOfs] < key <= a[base+ofs], so key belongs somewhere to the right of lastOfs but no farther right than ofs.
		 * Do a binary search, with invariant a[base + lastOfs - 1] < key <= a[base + ofs].
		 */
    lastOfs++;
    while (lastOfs < ofs) {
        int m = lastOfs + ((ofs - lastOfs) >>> 1);
        if (c.compare(key, a[base + m]) > 0)
            // a[base + m] < key
            lastOfs = m + 1;
        else
            // key <= a[base + m]
            ofs = m;
    }
    // so a[base + ofs - 1] < key <= a[base + ofs]
    if (DEBUG)
        assert lastOfs == ofs;
    return ofs;
}
