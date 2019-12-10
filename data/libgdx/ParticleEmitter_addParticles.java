public void addParticles(int count) {
    count = Math.min(count, maxParticleCount - activeCount);
    if (count == 0)
        return;
    boolean[] active = this.active;
    int index = 0, n = active.length;
    outer: for (int i = 0; i < count; i++) {
        for (; index < n; index++) {
            if (!active[index]) {
                activateParticle(index);
                active[index++] = true;
                continue outer;
            }
        }
        break;
    }
    this.activeCount += count;
}
