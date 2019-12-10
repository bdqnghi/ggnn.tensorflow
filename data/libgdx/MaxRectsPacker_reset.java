public int reset() {
    low = min;
    high = max;
    current = (low + high) >>> 1;
    return pot ? (int) Math.pow(2, current) : current;
}
