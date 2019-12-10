public int next(boolean result) {
    if (low >= high)
        return -1;
    if (result)
        low = current + 1;
    else
        high = current - 1;
    current = (low + high) >>> 1;
    if (Math.abs(low - high) < fuzziness)
        return -1;
    return pot ? (int) Math.pow(2, current) : current;
}
