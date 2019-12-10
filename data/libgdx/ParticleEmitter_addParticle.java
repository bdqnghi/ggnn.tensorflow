public void addParticle() {
    int activeCount = this.activeCount;
    if (activeCount == maxParticleCount)
        return;
    boolean[] active = this.active;
    for (int i = 0, n = active.length; i < n; i++) {
        if (!active[i]) {
            activateParticle(i);
            active[i] = true;
            this.activeCount = activeCount + 1;
            break;
        }
    }
}
