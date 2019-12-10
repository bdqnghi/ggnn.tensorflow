public void destroyParticlesInGroup(ParticleGroup group, boolean callDestructionListener) {
    for (int i = group.m_firstIndex; i < group.m_lastIndex; i++) {
        destroyParticle(i, callDestructionListener);
    }
}
