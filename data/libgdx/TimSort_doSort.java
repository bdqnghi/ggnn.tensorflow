public void doSort(T[] a, Comparator<T> c, int lo, int hi) {
    stackSize = 0;
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
    this.a = a;
    this.c = c;
    tmpCount = 0;
    /**
     * March over the array once, left to right, finding natural runs, extending short natural runs to minRun elements, and
     * merging runs to maintain stack invariant.
     */
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
        pushRun(lo, runLen);
        mergeCollapse();
        // Advance to find next run
        lo += runLen;
        nRemaining -= runLen;
    } while (nRemaining != 0);
    // Merge all remaining runs to complete sort
    if (DEBUG)
        assert lo == hi;
    mergeForceCollapse();
    if (DEBUG)
        assert stackSize == 1;
    this.a = null;
    this.c = null;
    T[] tmp = this.tmp;
    for (int i = 0, n = tmpCount; i < n; i++) tmp[i] = null;
}
