private void addParticles(int count) {
    count = Math.min(count, maxParticleCount - controller.particles.size);
    if (count <= 0)
        return;
    controller.activateParticles(controller.particles.size, count);
    controller.particles.size += count;
}
