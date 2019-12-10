/**
 * Merges two adjacent runs in place, in a stable fashion. The first element of the first run must be greater than the first
 * element of the second run (a[base1] > a[base2]), and the last element of the first run (a[base1 + len1-1]) must be greater
 * than all elements of the second run.
 *
 * For performance, this method should be called only when len1 <= len2; its twin, mergeHi should be called if len1 >= len2.
 * (Either method may be called if len1 == len2.)
 *
 * @param base1 index of first element in first run to be merged
 * @param len1 length of first run to be merged (must be > 0)
 * @param base2 index of first element in second run to be merged (must be aBase + aLen)
 * @param len2 length of second run to be merged (must be > 0)
 */
@SuppressWarnings("unchecked")
private void mergeLo(int base1, int len1, int base2, int len2) {
    if (DEBUG)
        assert len1 > 0 && len2 > 0 && base1 + len1 == base2;
    // Copy first run into temp array
    // For performance
    Object[] a = this.a;
    Object[] tmp = ensureCapacity(len1);
    System.arraycopy(a, base1, tmp, 0, len1);
    // Indexes into tmp array
    int cursor1 = 0;
    // Indexes int a
    int cursor2 = base2;
    // Indexes int a
    int dest = base1;
    // Move first element of second run and deal with degenerate cases
    a[dest++] = a[cursor2++];
    if (--len2 == 0) {
        System.arraycopy(tmp, cursor1, a, dest, len1);
        return;
    }
    if (len1 == 1) {
        System.arraycopy(a, cursor2, a, dest, len2);
        // Last elt of run 1 to end of merge
        a[dest + len2] = tmp[cursor1];
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
			 * Do the straightforward thing until (if ever) one run starts winning consistently.
			 */
        do {
            if (DEBUG)
                assert len1 > 1 && len2 > 0;
            if (((Comparable) a[cursor2]).compareTo(tmp[cursor1]) < 0) {
                a[dest++] = a[cursor2++];
                count2++;
                count1 = 0;
                if (--len2 == 0)
                    break outer;
            } else {
                a[dest++] = tmp[cursor1++];
                count1++;
                count2 = 0;
                if (--len1 == 1)
                    break outer;
            }
        } while ((count1 | count2) < minGallop);
        /*
			 * One run is winning so consistently that galloping may be a huge win. So try that, and continue galloping until (if
			 * ever) neither run appears to be winning consistently anymore.
			 */
        do {
            if (DEBUG)
                assert len1 > 1 && len2 > 0;
            count1 = gallopRight((Comparable) a[cursor2], tmp, cursor1, len1, 0);
            if (count1 != 0) {
                System.arraycopy(tmp, cursor1, a, dest, count1);
                dest += count1;
                cursor1 += count1;
                len1 -= count1;
                if (// len1 == 1 || len1 == 0
                len1 <= 1)
                    break outer;
            }
            a[dest++] = a[cursor2++];
            if (--len2 == 0)
                break outer;
            count2 = gallopLeft((Comparable) tmp[cursor1], a, cursor2, len2, 0);
            if (count2 != 0) {
                System.arraycopy(a, cursor2, a, dest, count2);
                dest += count2;
                cursor2 += count2;
                len2 -= count2;
                if (len2 == 0)
                    break outer;
            }
            a[dest++] = tmp[cursor1++];
            if (--len1 == 1)
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
    if (len1 == 1) {
        if (DEBUG)
            assert len2 > 0;
        System.arraycopy(a, cursor2, a, dest, len2);
        // Last elt of run 1 to end of merge
        a[dest + len2] = tmp[cursor1];
    } else if (len1 == 0) {
        throw new IllegalArgumentException("Comparison method violates its general contract!");
    } else {
        if (DEBUG)
            assert len2 == 0;
        if (DEBUG)
            assert len1 > 1;
        System.arraycopy(tmp, cursor1, a, dest, len1);
    }
}
