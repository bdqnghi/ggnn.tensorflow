public void joinParticleGroups(ParticleGroup groupA, ParticleGroup groupB) {
    assert (groupA != groupB);
    RotateBuffer(groupB.m_firstIndex, groupB.m_lastIndex, m_count);
    assert (groupB.m_lastIndex == m_count);
    RotateBuffer(groupA.m_firstIndex, groupA.m_lastIndex, groupB.m_firstIndex);
    assert (groupA.m_lastIndex == groupB.m_firstIndex);
    int particleFlags = 0;
    for (int i = groupA.m_firstIndex; i < groupB.m_lastIndex; i++) {
        particleFlags |= m_flagsBuffer.data[i];
    }
    updateContacts(true);
    if ((particleFlags & k_pairFlags) != 0) {
        for (int k = 0; k < m_contactCount; k++) {
            final ParticleContact contact = m_contactBuffer[k];
            int a = contact.indexA;
            int b = contact.indexB;
            if (a > b) {
                int temp = a;
                a = b;
                b = temp;
            }
            if (groupA.m_firstIndex <= a && a < groupA.m_lastIndex && groupB.m_firstIndex <= b && b < groupB.m_lastIndex) {
                if (m_pairCount >= m_pairCapacity) {
                    int oldCapacity = m_pairCapacity;
                    int newCapacity = m_pairCount != 0 ? 2 * m_pairCount : Settings.minParticleBufferCapacity;
                    m_pairBuffer = BufferUtils.reallocateBuffer(Pair.class, m_pairBuffer, oldCapacity, newCapacity);
                    m_pairCapacity = newCapacity;
                }
                Pair pair = m_pairBuffer[m_pairCount];
                pair.indexA = a;
                pair.indexB = b;
                pair.flags = contact.flags;
                pair.strength = MathUtils.min(groupA.m_strength, groupB.m_strength);
                pair.distance = MathUtils.distance(m_positionBuffer.data[a], m_positionBuffer.data[b]);
                m_pairCount++;
            }
        }
    }
    if ((particleFlags & k_triadFlags) != 0) {
        VoronoiDiagram diagram = new VoronoiDiagram(groupB.m_lastIndex - groupA.m_firstIndex);
        for (int i = groupA.m_firstIndex; i < groupB.m_lastIndex; i++) {
            if ((m_flagsBuffer.data[i] & ParticleType.b2_zombieParticle) == 0) {
                diagram.addGenerator(m_positionBuffer.data[i], i);
            }
        }
        diagram.generate(getParticleStride() / 2);
        JoinParticleGroupsCallback callback = new JoinParticleGroupsCallback();
        callback.system = this;
        callback.groupA = groupA;
        callback.groupB = groupB;
        diagram.getNodes(callback);
    }
    for (int i = groupB.m_firstIndex; i < groupB.m_lastIndex; i++) {
        m_groupBuffer[i] = groupA;
    }
    int groupFlags = groupA.m_groupFlags | groupB.m_groupFlags;
    groupA.m_groupFlags = groupFlags;
    groupA.m_lastIndex = groupB.m_lastIndex;
    groupB.m_firstIndex = groupB.m_lastIndex;
    destroyParticleGroup(groupB);
    if ((groupFlags & ParticleGroupType.b2_solidParticleGroup) != 0) {
        computeDepthForGroup(groupA);
    }
}
