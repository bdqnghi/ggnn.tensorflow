// / Returns 0 if the two intervals i1 and i2 are disjoint, or the length of their overlap otherwise.
private int commonIntervalLength(int i1start, int i1end, int i2start, int i2end) {
    if (i1end < i2start || i2end < i1start)
        return 0;
    return Math.min(i1end, i2end) - Math.max(i1start, i2start);
}
