/**
 * Examines the stack of runs waiting to be merged and merges adjacent runs until the stack invariants are reestablished:
 *
 * 1. runLen[i - 3] > runLen[i - 2] + runLen[i - 1] 2. runLen[i - 2] > runLen[i - 1]
 *
 * This method is called each time a new run is pushed onto the stack, so the invariants are guaranteed to hold for i <
 * stackSize upon entry to the method.
 */
private void mergeCollapse() {
    while (stackSize > 1) {
        int n = stackSize - 2;
        if (n > 0 && runLen[n - 1] <= runLen[n] + runLen[n + 1]) {
            if (runLen[n - 1] < runLen[n + 1])
                n--;
            mergeAt(n);
        } else if (runLen[n] <= runLen[n + 1]) {
            mergeAt(n);
        } else {
            // Invariant is established
            break;
        }
    }
}
