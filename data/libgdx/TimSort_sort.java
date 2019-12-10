static <T> void sort(T[] a, int lo, int hi, Comparator<? super T> c) {
    if (c == null) {
        Arrays.sort(a, lo, hi);
        return;
    }
    rangeCheck(a.length, lo, hi);
    int nRemaining = hi - lo;
    // Arrays of size 0 and 1 are always sorted
    if (nRemaining < 2)
        return;
    // If array is small, do a "mini-TimSort" with no merges
    if (nRemaining < MIN_MERGE) {
        int initRunLen = countRunAndMakeAscending(a, lo, hi, c);
        binarySort(a, lo, hi, lo + initRunLen, c);
        return;
    }
    /**
     * March over the array once, left to right, finding natural runs, extending short natural runs to minRun elements, and
     * merging runs to maintain stack invariant.
     */
    TimSort<T> ts = new TimSort<T>(a, c);
    int minRun = minRunLength(nRemaining);
    do {
        // Identify next run
        int runLen = countRunAndMakeAscending(a, lo, hi, c);
        // If run is short, extend to min(minRun, nRemaining)
        if (runLen < minRun) {
            int force = nRemaining <= minRun ? nRemaining : minRun;
            binarySort(a, lo, lo + force, lo + runLen, c);
            runLen = force;
        }
        // Push run onto pending-run stack, and maybe merge
        ts.pushRun(lo, runLen);
        ts.mergeCollapse();
        // Advance to find next run
        lo += runLen;
        nRemaining -= runLen;
    } while (nRemaining != 0);
    // Merge all remaining runs to complete sort
    if (DEBUG)
        assert lo == hi;
    ts.mergeForceCollapse();
    if (DEBUG)
        assert ts.stackSize == 1;
}
