/**
 * Like mergeLo, except that this method should be called only if len1 >= len2; mergeLo should be called if len1 <= len2.
 * (Either method may be called if len1 == len2.)
 *
 * @param base1 index of first element in first run to be merged
 * @param len1 length of first run to be merged (must be > 0)
 * @param base2 index of first element in second run to be merged (must be aBase + aLen)
 * @param len2 length of second run to be merged (must be > 0)
 */
@SuppressWarnings("unchecked")
private void mergeHi(int base1, int len1, int base2, int len2) {
    if (DEBUG)
        assert len1 > 0 && len2 > 0 && base1 + len1 == base2;
    // Copy second run into temp array
    // For performance
    Object[] a = this.a;
    Object[] tmp = ensureCapacity(len2);
    System.arraycopy(a, base2, tmp, 0, len2);
    // Indexes into a
    int cursor1 = base1 + len1 - 1;
    // Indexes into tmp array
    int cursor2 = len2 - 1;
    // Indexes into a
    int dest = base2 + len2 - 1;
    // Move last element of first run and deal with degenerate cases
    a[dest--] = a[cursor1--];
    if (--len1 == 0) {
        System.arraycopy(tmp, 0, a, dest - (len2 - 1), len2);
        return;
    }
    if (len2 == 1) {
        dest -= len1;
        cursor1 -= len1;
        System.arraycopy(a, cursor1 + 1, a, dest + 1, len1);
        a[dest] = tmp[cursor2];
        return;
    }
    // Use local variable for performance
    int minGallop = this.minGallop;
    outer: while (true) {
        // Number of times in a row that first run won
        int count1 = 0;
        // Number of times in a row that second run won
        int count2 = 0;
        /*
			 * Do the straightforward thing until (if ever) one run appears to win consistently.
			 */
        do {
            if (DEBUG)
                assert len1 > 0 && len2 > 1;
            if (((Comparable) tmp[cursor2]).compareTo(a[cursor1]) < 0) {
                a[dest--] = a[cursor1--];
                count1++;
                count2 = 0;
                if (--len1 == 0)
                    break outer;
            } else {
                a[dest--] = tmp[cursor2--];
                count2++;
                count1 = 0;
                if (--len2 == 1)
                    break outer;
            }
        } while ((count1 | count2) < minGallop);
        /*
			 * One run is winning so consistently that galloping may be a huge win. So try that, and continue galloping until (if
			 * ever) neither run appears to be winning consistently anymore.
			 */
        do {
            if (DEBUG)
                assert len1 > 0 && len2 > 1;
            count1 = len1 - gallopRight((Comparable) tmp[cursor2], a, base1, len1, len1 - 1);
            if (count1 != 0) {
                dest -= count1;
                cursor1 -= count1;
                len1 -= count1;
                System.arraycopy(a, cursor1 + 1, a, dest + 1, count1);
                if (len1 == 0)
                    break outer;
            }
            a[dest--] = tmp[cursor2--];
            if (--len2 == 1)
                break outer;
            count2 = len2 - gallopLeft((Comparable) a[cursor1], tmp, 0, len2, len2 - 1);
            if (count2 != 0) {
                dest -= count2;
                cursor2 -= count2;
                len2 -= count2;
                System.arraycopy(tmp, cursor2 + 1, a, dest + 1, count2);
                // len2 == 1 || len2 == 0
                if (len2 <= 1)
                    break outer;
            }
            a[dest--] = a[cursor1--];
            if (--len1 == 0)
                break outer;
            minGallop--;
        } while (count1 >= MIN_GALLOP | count2 >= MIN_GALLOP);
        if (minGallop < 0)
            minGallop = 0;
        // Penalize for leaving gallop mode
        minGallop += 2;
    }
    // End of "outer" loop
    // Write back to field
    this.minGallop = minGallop < 1 ? 1 : minGallop;
    if (len2 == 1) {
        if (DEBUG)
            assert len1 > 0;
        dest -= len1;
        cursor1 -= len1;
        System.arraycopy(a, cursor1 + 1, a, dest + 1, len1);
        // Move first elt of run2 to front of merge
        a[dest] = tmp[cursor2];
    } else if (len2 == 0) {
        throw new IllegalArgumentException("Comparison method violates its general contract!");
    } else {
        if (DEBUG)
            assert len1 == 0;
        if (DEBUG)
            assert len2 > 0;
        System.arraycopy(tmp, 0, a, dest - (len2 - 1), len2);
    }
}
