public void destroyParticle(int index, boolean callDestructionListener) {
    int flags = ParticleType.b2_zombieParticle;
    if (callDestructionListener) {
        flags |= ParticleType.b2_destructionListener;
    }
    m_flagsBuffer.data[index] |= flags;
}
