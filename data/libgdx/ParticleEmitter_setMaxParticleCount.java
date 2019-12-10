public void setMaxParticleCount(int maxParticleCount) {
    this.maxParticleCount = maxParticleCount;
    active = new boolean[maxParticleCount];
    activeCount = 0;
    particles = new Particle[maxParticleCount];
}
