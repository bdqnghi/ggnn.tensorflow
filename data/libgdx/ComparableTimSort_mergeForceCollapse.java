/**
 * Merges all runs on the stack until only one remains. This method is called once, to complete the sort.
 */
private void mergeForceCollapse() {
    while (stackSize > 1) {
        int n = stackSize - 2;
        if (n > 0 && runLen[n - 1] < runLen[n + 1])
            n--;
        mergeAt(n);
    }
}
