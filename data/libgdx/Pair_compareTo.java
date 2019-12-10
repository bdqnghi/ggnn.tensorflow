public int compareTo(Pair pair2) {
    if (this.proxyIdA < pair2.proxyIdA) {
        return -1;
    }
    if (this.proxyIdA == pair2.proxyIdA) {
        return proxyIdB < pair2.proxyIdB ? -1 : proxyIdB == pair2.proxyIdB ? 0 : 1;
    }
    return 1;
}
