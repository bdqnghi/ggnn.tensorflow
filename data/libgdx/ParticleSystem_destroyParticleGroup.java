// Only called from solveZombie() or joinParticleGroups().
void destroyParticleGroup(ParticleGroup group) {
    assert (m_groupCount > 0);
    assert (group != null);
    if (m_world.getParticleDestructionListener() != null) {
        m_world.getParticleDestructionListener().sayGoodbye(group);
    }
    for (int i = group.m_firstIndex; i < group.m_lastIndex; i++) {
        m_groupBuffer[i] = null;
    }
    if (group.m_prev != null) {
        group.m_prev.m_next = group.m_next;
    }
    if (group.m_next != null) {
        group.m_next.m_prev = group.m_prev;
    }
    if (group == m_groupList) {
        m_groupList = group.m_next;
    }
    --m_groupCount;
}
