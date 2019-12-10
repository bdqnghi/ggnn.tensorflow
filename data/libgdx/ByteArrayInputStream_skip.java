public synchronized long skip(long n) {
    long k = count - pos;
    if (n < k) {
        k = n < 0 ? 0 : n;
    }
    pos += k;
    return k;
}
