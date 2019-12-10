void solveZombie() {
    // removes particles with zombie flag
    int newCount = 0;
    int[] newIndices = new int[m_count];
    for (int i = 0; i < m_count; i++) {
        int flags = m_flagsBuffer.data[i];
        if ((flags & ParticleType.b2_zombieParticle) != 0) {
            ParticleDestructionListener destructionListener = m_world.getParticleDestructionListener();
            if ((flags & ParticleType.b2_destructionListener) != 0 && destructionListener != null) {
                destructionListener.sayGoodbye(i);
            }
            newIndices[i] = Settings.invalidParticleIndex;
        } else {
            newIndices[i] = newCount;
            if (i != newCount) {
                m_flagsBuffer.data[newCount] = m_flagsBuffer.data[i];
                m_positionBuffer.data[newCount].set(m_positionBuffer.data[i]);
                m_velocityBuffer.data[newCount].set(m_velocityBuffer.data[i]);
                m_groupBuffer[newCount] = m_groupBuffer[i];
                if (m_depthBuffer != null) {
                    m_depthBuffer[newCount] = m_depthBuffer[i];
                }
                if (m_colorBuffer.data != null) {
                    m_colorBuffer.data[newCount].set(m_colorBuffer.data[i]);
                }
                if (m_userDataBuffer.data != null) {
                    m_userDataBuffer.data[newCount] = m_userDataBuffer.data[i];
                }
            }
            newCount++;
        }
    }
    // update proxies
    for (int k = 0; k < m_proxyCount; k++) {
        Proxy proxy = m_proxyBuffer[k];
        proxy.index = newIndices[proxy.index];
    }
    // Proxy lastProxy = std.remove_if(
    // m_proxyBuffer, m_proxyBuffer + m_proxyCount,
    // Test.IsProxyInvalid);
    // m_proxyCount = (int) (lastProxy - m_proxyBuffer);
    int j = m_proxyCount;
    for (int i = 0; i < j; i++) {
        if (Test.IsProxyInvalid(m_proxyBuffer[i])) {
            --j;
            Proxy temp = m_proxyBuffer[j];
            m_proxyBuffer[j] = m_proxyBuffer[i];
            m_proxyBuffer[i] = temp;
            --i;
        }
    }
    m_proxyCount = j;
    // update contacts
    for (int k = 0; k < m_contactCount; k++) {
        ParticleContact contact = m_contactBuffer[k];
        contact.indexA = newIndices[contact.indexA];
        contact.indexB = newIndices[contact.indexB];
    }
    // ParticleContact lastContact = std.remove_if(
    // m_contactBuffer, m_contactBuffer + m_contactCount,
    // Test.IsContactInvalid);
    // m_contactCount = (int) (lastContact - m_contactBuffer);
    j = m_contactCount;
    for (int i = 0; i < j; i++) {
        if (Test.IsContactInvalid(m_contactBuffer[i])) {
            --j;
            ParticleContact temp = m_contactBuffer[j];
            m_contactBuffer[j] = m_contactBuffer[i];
            m_contactBuffer[i] = temp;
            --i;
        }
    }
    m_contactCount = j;
    // update particle-body contacts
    for (int k = 0; k < m_bodyContactCount; k++) {
        ParticleBodyContact contact = m_bodyContactBuffer[k];
        contact.index = newIndices[contact.index];
    }
    // ParticleBodyContact lastBodyContact = std.remove_if(
    // m_bodyContactBuffer, m_bodyContactBuffer + m_bodyContactCount,
    // Test.IsBodyContactInvalid);
    // m_bodyContactCount = (int) (lastBodyContact - m_bodyContactBuffer);
    j = m_bodyContactCount;
    for (int i = 0; i < j; i++) {
        if (Test.IsBodyContactInvalid(m_bodyContactBuffer[i])) {
            --j;
            ParticleBodyContact temp = m_bodyContactBuffer[j];
            m_bodyContactBuffer[j] = m_bodyContactBuffer[i];
            m_bodyContactBuffer[i] = temp;
            --i;
        }
    }
    m_bodyContactCount = j;
    // update pairs
    for (int k = 0; k < m_pairCount; k++) {
        Pair pair = m_pairBuffer[k];
        pair.indexA = newIndices[pair.indexA];
        pair.indexB = newIndices[pair.indexB];
    }
    // Pair lastPair = std.remove_if(m_pairBuffer, m_pairBuffer + m_pairCount, Test.IsPairInvalid);
    // m_pairCount = (int) (lastPair - m_pairBuffer);
    j = m_pairCount;
    for (int i = 0; i < j; i++) {
        if (Test.IsPairInvalid(m_pairBuffer[i])) {
            --j;
            Pair temp = m_pairBuffer[j];
            m_pairBuffer[j] = m_pairBuffer[i];
            m_pairBuffer[i] = temp;
            --i;
        }
    }
    m_pairCount = j;
    // update triads
    for (int k = 0; k < m_triadCount; k++) {
        Triad triad = m_triadBuffer[k];
        triad.indexA = newIndices[triad.indexA];
        triad.indexB = newIndices[triad.indexB];
        triad.indexC = newIndices[triad.indexC];
    }
    // Triad lastTriad =
    // std.remove_if(m_triadBuffer, m_triadBuffer + m_triadCount, Test.isTriadInvalid);
    // m_triadCount = (int) (lastTriad - m_triadBuffer);
    j = m_triadCount;
    for (int i = 0; i < j; i++) {
        if (Test.IsTriadInvalid(m_triadBuffer[i])) {
            --j;
            Triad temp = m_triadBuffer[j];
            m_triadBuffer[j] = m_triadBuffer[i];
            m_triadBuffer[i] = temp;
            --i;
        }
    }
    m_triadCount = j;
    // update groups
    for (ParticleGroup group = m_groupList; group != null; group = group.getNext()) {
        int firstIndex = newCount;
        int lastIndex = 0;
        boolean modified = false;
        for (int i = group.m_firstIndex; i < group.m_lastIndex; i++) {
            j = newIndices[i];
            if (j >= 0) {
                firstIndex = MathUtils.min(firstIndex, j);
                lastIndex = MathUtils.max(lastIndex, j + 1);
            } else {
                modified = true;
            }
        }
        if (firstIndex < lastIndex) {
            group.m_firstIndex = firstIndex;
            group.m_lastIndex = lastIndex;
            if (modified) {
                if ((group.m_groupFlags & ParticleGroupType.b2_rigidParticleGroup) != 0) {
                    group.m_toBeSplit = true;
                }
            }
        } else {
            group.m_firstIndex = 0;
            group.m_lastIndex = 0;
            if (group.m_destroyAutomatically) {
                group.m_toBeDestroyed = true;
            }
        }
    }
    // update particle count
    m_count = newCount;
    // destroy bodies with no particles
    for (ParticleGroup group = m_groupList; group != null; ) {
        ParticleGroup next = group.getNext();
        if (group.m_toBeDestroyed) {
            destroyParticleGroup(group);
        } else if (group.m_toBeSplit) {
        // TODO: split the group
        }
        group = next;
    }
}
