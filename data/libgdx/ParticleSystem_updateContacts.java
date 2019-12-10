public void updateContacts(boolean exceptZombie) {
    for (int p = 0; p < m_proxyCount; p++) {
        Proxy proxy = m_proxyBuffer[p];
        int i = proxy.index;
        Vec2 pos = m_positionBuffer.data[i];
        proxy.tag = computeTag(m_inverseDiameter * pos.x, m_inverseDiameter * pos.y);
    }
    Arrays.sort(m_proxyBuffer, 0, m_proxyCount);
    m_contactCount = 0;
    int c_index = 0;
    for (int i = 0; i < m_proxyCount; i++) {
        Proxy a = m_proxyBuffer[i];
        long rightTag = computeRelativeTag(a.tag, 1, 0);
        for (int j = i + 1; j < m_proxyCount; j++) {
            Proxy b = m_proxyBuffer[j];
            if (rightTag < b.tag) {
                break;
            }
            addContact(a.index, b.index);
        }
        long bottomLeftTag = computeRelativeTag(a.tag, -1, 1);
        for (; c_index < m_proxyCount; c_index++) {
            Proxy c = m_proxyBuffer[c_index];
            if (bottomLeftTag <= c.tag) {
                break;
            }
        }
        long bottomRightTag = computeRelativeTag(a.tag, 1, 1);
        for (int b_index = c_index; b_index < m_proxyCount; b_index++) {
            Proxy b = m_proxyBuffer[b_index];
            if (bottomRightTag < b.tag) {
                break;
            }
            addContact(a.index, b.index);
        }
    }
    if (exceptZombie) {
        int j = m_contactCount;
        for (int i = 0; i < j; i++) {
            if ((m_contactBuffer[i].flags & ParticleType.b2_zombieParticle) != 0) {
                --j;
                ParticleContact temp = m_contactBuffer[j];
                m_contactBuffer[j] = m_contactBuffer[i];
                m_contactBuffer[i] = temp;
                --i;
            }
        }
        m_contactCount = j;
    }
}
