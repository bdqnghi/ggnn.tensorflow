/**
 * Merges the two runs at stack indices i and i+1. Run i must be the penultimate or antepenultimate run on the stack. In other
 * words, i must be equal to stackSize-2 or stackSize-3.
 *
 * @param i stack index of the first of the two runs to merge
 */
@SuppressWarnings("unchecked")
private void mergeAt(int i) {
    if (DEBUG)
        assert stackSize >= 2;
    if (DEBUG)
        assert i >= 0;
    if (DEBUG)
        assert i == stackSize - 2 || i == stackSize - 3;
    int base1 = runBase[i];
    int len1 = runLen[i];
    int base2 = runBase[i + 1];
    int len2 = runLen[i + 1];
    if (DEBUG)
        assert len1 > 0 && len2 > 0;
    if (DEBUG)
        assert base1 + len1 == base2;
    /*
		 * Record the length of the combined runs; if i is the 3rd-last run now, also slide over the last run (which isn't involved
		 * in this merge). The current run (i+1) goes away in any case.
		 */
    runLen[i] = len1 + len2;
    if (i == stackSize - 3) {
        runBase[i + 1] = runBase[i + 2];
        runLen[i + 1] = runLen[i + 2];
    }
    stackSize--;
    /*
		 * Find where the first element of run2 goes in run1. Prior elements in run1 can be ignored (because they're already in
		 * place).
		 */
    int k = gallopRight((Comparable<Object>) a[base2], a, base1, len1, 0);
    if (DEBUG)
        assert k >= 0;
    base1 += k;
    len1 -= k;
    if (len1 == 0)
        return;
    /*
		 * Find where the last element of run1 goes in run2. Subsequent elements in run2 can be ignored (because they're already in
		 * place).
		 */
    len2 = gallopLeft((Comparable<Object>) a[base1 + len1 - 1], a, base2, len2, len2 - 1);
    if (DEBUG)
        assert len2 >= 0;
    if (len2 == 0)
        return;
    // Merge remaining runs, using tmp array with min(len1, len2) elements
    if (len1 <= len2)
        mergeLo(base1, len1, base2, len2);
    else
        mergeHi(base1, len1, base2, len2);
}
