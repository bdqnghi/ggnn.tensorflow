public void setFlip(boolean flipX, boolean flipY) {
    this.flipX = flipX;
    this.flipY = flipY;
    if (particles == null)
        return;
    for (int i = 0, n = particles.length; i < n; i++) {
        Particle particle = particles[i];
        if (particle != null)
            particle.flip(flipX, flipY);
    }
}
