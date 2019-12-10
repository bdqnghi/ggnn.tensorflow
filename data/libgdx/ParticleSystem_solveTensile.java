void solveTensile(final TimeStep step) {
    m_accumulation2Buffer = requestParticleBuffer(Vec2.class, m_accumulation2Buffer);
    for (int i = 0; i < m_count; i++) {
        m_accumulationBuffer[i] = 0;
        m_accumulation2Buffer[i].setZero();
    }
    for (int k = 0; k < m_contactCount; k++) {
        final ParticleContact contact = m_contactBuffer[k];
        if ((contact.flags & ParticleType.b2_tensileParticle) != 0) {
            int a = contact.indexA;
            int b = contact.indexB;
            float w = contact.weight;
            Vec2 n = contact.normal;
            m_accumulationBuffer[a] += w;
            m_accumulationBuffer[b] += w;
            final Vec2 a2A = m_accumulation2Buffer[a];
            final Vec2 a2B = m_accumulation2Buffer[b];
            final float inter = (1 - w) * w;
            a2A.x -= inter * n.x;
            a2A.y -= inter * n.y;
            a2B.x += inter * n.x;
            a2B.y += inter * n.y;
        }
    }
    float strengthA = m_surfaceTensionStrengthA * getCriticalVelocity(step);
    float strengthB = m_surfaceTensionStrengthB * getCriticalVelocity(step);
    for (int k = 0; k < m_contactCount; k++) {
        final ParticleContact contact = m_contactBuffer[k];
        if ((contact.flags & ParticleType.b2_tensileParticle) != 0) {
            int a = contact.indexA;
            int b = contact.indexB;
            float w = contact.weight;
            Vec2 n = contact.normal;
            final Vec2 a2A = m_accumulation2Buffer[a];
            final Vec2 a2B = m_accumulation2Buffer[b];
            float h = m_accumulationBuffer[a] + m_accumulationBuffer[b];
            final float sx = a2B.x - a2A.x;
            final float sy = a2B.y - a2A.y;
            float fn = (strengthA * (h - 2) + strengthB * (sx * n.x + sy * n.y)) * w;
            final float fx = fn * n.x;
            final float fy = fn * n.y;
            final Vec2 va = m_velocityBuffer.data[a];
            final Vec2 vb = m_velocityBuffer.data[b];
            va.x -= fx;
            va.y -= fy;
            vb.x += fx;
            vb.y += fy;
        }
    }
}
