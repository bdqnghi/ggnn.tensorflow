protected void allocateChannels(int maxParticleCount) {
    particles = new ParallelArray(maxParticleCount);
    // Alloc additional channels
    emitter.allocateChannels();
    for (Influencer influencer : influencers) influencer.allocateChannels();
    renderer.allocateChannels();
}
