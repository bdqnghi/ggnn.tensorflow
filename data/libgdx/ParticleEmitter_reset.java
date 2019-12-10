public void reset() {
    emissionDelta = 0;
    durationTimer = duration;
    boolean[] active = this.active;
    for (int i = 0, n = active.length; i < n; i++) active[i] = false;
    activeCount = 0;
    start();
}
