/**
 * Like gallopLeft, except that if the range contains an element equal to key, gallopRight returns the index after the
 * rightmost equal element.
 *
 * @param key the key whose insertion point to search for
 * @param a the array in which to search
 * @param base the index of the first element in the range
 * @param len the length of the range; must be > 0
 * @param hint the index at which to begin the search, 0 <= hint < n. The closer hint is to the result, the faster this method
 *           will run.
 * @param c the comparator used to order the range, and to search
 * @return the int k, 0 <= k <= n such that a[b + k - 1] <= key < a[b + k]
 */
private static <T> int gallopRight(T key, T[] a, int base, int len, int hint, Comparator<? super T> c) {
    if (DEBUG)
        assert len > 0 && hint >= 0 && hint < len;
    int ofs = 1;
    int lastOfs = 0;
    if (c.compare(key, a[base + hint]) < 0) {
        // Gallop left until a[b+hint - ofs] <= key < a[b+hint - lastOfs]
        int maxOfs = hint + 1;
        while (ofs < maxOfs && c.compare(key, a[base + hint - ofs]) < 0) {
            lastOfs = ofs;
            ofs = (ofs << 1) + 1;
            if (// int overflow
            ofs <= 0)
                ofs = maxOfs;
        }
        if (ofs > maxOfs)
            ofs = maxOfs;
        // Make offsets relative to b
        int tmp = lastOfs;
        lastOfs = hint - ofs;
        ofs = hint - tmp;
    } else {
        // a[b + hint] <= key
        // Gallop right until a[b+hint + lastOfs] <= key < a[b+hint + ofs]
        int maxOfs = len - hint;
        while (ofs < maxOfs && c.compare(key, a[base + hint + ofs]) >= 0) {
            lastOfs = ofs;
            ofs = (ofs << 1) + 1;
            if (// int overflow
            ofs <= 0)
                ofs = maxOfs;
        }
        if (ofs > maxOfs)
            ofs = maxOfs;
        // Make offsets relative to b
        lastOfs += hint;
        ofs += hint;
    }
    if (DEBUG)
        assert -1 <= lastOfs && lastOfs < ofs && ofs <= len;
    /*
		 * Now a[b + lastOfs] <= key < a[b + ofs], so key belongs somewhere to the right of lastOfs but no farther right than ofs.
		 * Do a binary search, with invariant a[b + lastOfs - 1] <= key < a[b + ofs].
		 */
    lastOfs++;
    while (lastOfs < ofs) {
        int m = lastOfs + ((ofs - lastOfs) >>> 1);
        if (c.compare(key, a[base + m]) < 0)
            // key < a[b + m]
            ofs = m;
        else
            // a[b + m] <= key
            lastOfs = m + 1;
    }
    // so a[b + ofs - 1] <= key < a[b + ofs]
    if (DEBUG)
        assert lastOfs == ofs;
    return ofs;
}
