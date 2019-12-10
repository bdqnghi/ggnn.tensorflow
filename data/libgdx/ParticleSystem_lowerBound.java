private static final int lowerBound(Proxy[] ray, int length, long tag) {
    int left = 0;
    int step, curr;
    while (length > 0) {
        step = length / 2;
        curr = left + step;
        if (ray[curr].tag < tag) {
            left = curr + 1;
            length -= step + 1;
        } else {
            length = step;
        }
    }
    return left;
}
