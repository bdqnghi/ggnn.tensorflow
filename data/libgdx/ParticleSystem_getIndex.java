final int getIndex(final int i) {
    if (i < start) {
        return i;
    } else if (i < mid) {
        return i + end - mid;
    } else if (i < end) {
        return i + start - mid;
    } else {
        return i;
    }
}
