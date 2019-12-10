/**
 * Examines the stack of runs waiting to be merged and merges adjacent runs until the stack invariants are reestablished:
 *
 * 1. runLen[n - 2] > runLen[n - 1] + runLen[n] 2. runLen[n - 1] > runLen[n]
 *
 * where n is the index of the last run in runLen.
 *
 * This method has been formally verified to be correct after checking the last 4 runs.
 * Checking for 3 runs results in an exception for large arrays.
 * (Source: http://envisage-project.eu/proving-android-java-and-python-sorting-algorithm-is-broken-and-how-to-fix-it/)
 *
 * This method is called each time a new run is pushed onto the stack, so the invariants are guaranteed to hold for i <
 * stackSize upon entry to the method.
 */
private void mergeCollapse() {
    while (stackSize > 1) {
        int n = stackSize - 2;
        if ((n >= 1 && runLen[n - 1] <= runLen[n] + runLen[n + 1]) || (n >= 2 && runLen[n - 2] <= runLen[n] + runLen[n - 1])) {
            if (runLen[n - 1] < runLen[n + 1])
                n--;
        } else if (runLen[n] > runLen[n + 1]) {
            // Invariant is established
            break;
        }
        mergeAt(n);
    }
}
