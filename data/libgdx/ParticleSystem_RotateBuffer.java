void RotateBuffer(int start, int mid, int end) {
    // move the particles assigned to the given group toward the end of array
    if (start == mid || mid == end) {
        return;
    }
    newIndices.start = start;
    newIndices.mid = mid;
    newIndices.end = end;
    BufferUtils.rotate(m_flagsBuffer.data, start, mid, end);
    BufferUtils.rotate(m_positionBuffer.data, start, mid, end);
    BufferUtils.rotate(m_velocityBuffer.data, start, mid, end);
    BufferUtils.rotate(m_groupBuffer, start, mid, end);
    if (m_depthBuffer != null) {
        BufferUtils.rotate(m_depthBuffer, start, mid, end);
    }
    if (m_colorBuffer.data != null) {
        BufferUtils.rotate(m_colorBuffer.data, start, mid, end);
    }
    if (m_userDataBuffer.data != null) {
        BufferUtils.rotate(m_userDataBuffer.data, start, mid, end);
    }
    // update proxies
    for (int k = 0; k < m_proxyCount; k++) {
        Proxy proxy = m_proxyBuffer[k];
        proxy.index = newIndices.getIndex(proxy.index);
    }
    // update contacts
    for (int k = 0; k < m_contactCount; k++) {
        ParticleContact contact = m_contactBuffer[k];
        contact.indexA = newIndices.getIndex(contact.indexA);
        contact.indexB = newIndices.getIndex(contact.indexB);
    }
    // update particle-body contacts
    for (int k = 0; k < m_bodyContactCount; k++) {
        ParticleBodyContact contact = m_bodyContactBuffer[k];
        contact.index = newIndices.getIndex(contact.index);
    }
    // update pairs
    for (int k = 0; k < m_pairCount; k++) {
        Pair pair = m_pairBuffer[k];
        pair.indexA = newIndices.getIndex(pair.indexA);
        pair.indexB = newIndices.getIndex(pair.indexB);
    }
    // update triads
    for (int k = 0; k < m_triadCount; k++) {
        Triad triad = m_triadBuffer[k];
        triad.indexA = newIndices.getIndex(triad.indexA);
        triad.indexB = newIndices.getIndex(triad.indexB);
        triad.indexC = newIndices.getIndex(triad.indexC);
    }
    // update groups
    for (ParticleGroup group = m_groupList; group != null; group = group.getNext()) {
        group.m_firstIndex = newIndices.getIndex(group.m_firstIndex);
        group.m_lastIndex = newIndices.getIndex(group.m_lastIndex - 1) + 1;
    }
}
