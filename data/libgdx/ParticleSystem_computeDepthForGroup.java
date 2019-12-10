public void computeDepthForGroup(ParticleGroup group) {
    for (int i = group.m_firstIndex; i < group.m_lastIndex; i++) {
        m_accumulationBuffer[i] = 0;
    }
    for (int k = 0; k < m_contactCount; k++) {
        final ParticleContact contact = m_contactBuffer[k];
        int a = contact.indexA;
        int b = contact.indexB;
        if (a >= group.m_firstIndex && a < group.m_lastIndex && b >= group.m_firstIndex && b < group.m_lastIndex) {
            float w = contact.weight;
            m_accumulationBuffer[a] += w;
            m_accumulationBuffer[b] += w;
        }
    }
    m_depthBuffer = requestParticleBuffer(m_depthBuffer);
    for (int i = group.m_firstIndex; i < group.m_lastIndex; i++) {
        float w = m_accumulationBuffer[i];
        m_depthBuffer[i] = w < 0.8f ? 0 : Float.MAX_VALUE;
    }
    int interationCount = group.getParticleCount();
    for (int t = 0; t < interationCount; t++) {
        boolean updated = false;
        for (int k = 0; k < m_contactCount; k++) {
            final ParticleContact contact = m_contactBuffer[k];
            int a = contact.indexA;
            int b = contact.indexB;
            if (a >= group.m_firstIndex && a < group.m_lastIndex && b >= group.m_firstIndex && b < group.m_lastIndex) {
                float r = 1 - contact.weight;
                float ap0 = m_depthBuffer[a];
                float bp0 = m_depthBuffer[b];
                float ap1 = bp0 + r;
                float bp1 = ap0 + r;
                if (ap0 > ap1) {
                    m_depthBuffer[a] = ap1;
                    updated = true;
                }
                if (bp0 > bp1) {
                    m_depthBuffer[b] = bp1;
                    updated = true;
                }
            }
        }
        if (!updated) {
            break;
        }
    }
    for (int i = group.m_firstIndex; i < group.m_lastIndex; i++) {
        float p = m_depthBuffer[i];
        if (p < Float.MAX_VALUE) {
            m_depthBuffer[i] *= m_particleDiameter;
        } else {
            m_depthBuffer[i] = 0;
        }
    }
}
