void solvePressure(TimeStep step) {
    // that means dimensionless density
    for (int i = 0; i < m_count; i++) {
        m_accumulationBuffer[i] = 0;
    }
    for (int k = 0; k < m_bodyContactCount; k++) {
        ParticleBodyContact contact = m_bodyContactBuffer[k];
        int a = contact.index;
        float w = contact.weight;
        m_accumulationBuffer[a] += w;
    }
    for (int k = 0; k < m_contactCount; k++) {
        ParticleContact contact = m_contactBuffer[k];
        int a = contact.indexA;
        int b = contact.indexB;
        float w = contact.weight;
        m_accumulationBuffer[a] += w;
        m_accumulationBuffer[b] += w;
    }
    // ignores powder particles
    if ((m_allParticleFlags & k_noPressureFlags) != 0) {
        for (int i = 0; i < m_count; i++) {
            if ((m_flagsBuffer.data[i] & k_noPressureFlags) != 0) {
                m_accumulationBuffer[i] = 0;
            }
        }
    }
    // calculates pressure as a linear function of density
    float pressurePerWeight = m_pressureStrength * getCriticalPressure(step);
    for (int i = 0; i < m_count; i++) {
        float w = m_accumulationBuffer[i];
        float h = pressurePerWeight * MathUtils.max(0.0f, MathUtils.min(w, Settings.maxParticleWeight) - Settings.minParticleWeight);
        m_accumulationBuffer[i] = h;
    }
    // applies pressure between each particles in contact
    float velocityPerPressure = step.dt / (m_density * m_particleDiameter);
    for (int k = 0; k < m_bodyContactCount; k++) {
        ParticleBodyContact contact = m_bodyContactBuffer[k];
        int a = contact.index;
        Body b = contact.body;
        float w = contact.weight;
        float m = contact.mass;
        Vec2 n = contact.normal;
        Vec2 p = m_positionBuffer.data[a];
        float h = m_accumulationBuffer[a] + pressurePerWeight * w;
        final Vec2 f = tempVec;
        final float coef = velocityPerPressure * w * m * h;
        f.x = coef * n.x;
        f.y = coef * n.y;
        final Vec2 velData = m_velocityBuffer.data[a];
        final float particleInvMass = getParticleInvMass();
        velData.x -= particleInvMass * f.x;
        velData.y -= particleInvMass * f.y;
        b.applyLinearImpulse(f, p, true);
    }
    for (int k = 0; k < m_contactCount; k++) {
        ParticleContact contact = m_contactBuffer[k];
        int a = contact.indexA;
        int b = contact.indexB;
        float w = contact.weight;
        Vec2 n = contact.normal;
        float h = m_accumulationBuffer[a] + m_accumulationBuffer[b];
        final float fx = velocityPerPressure * w * h * n.x;
        final float fy = velocityPerPressure * w * h * n.y;
        final Vec2 velDataA = m_velocityBuffer.data[a];
        final Vec2 velDataB = m_velocityBuffer.data[b];
        velDataA.x -= fx;
        velDataA.y -= fy;
        velDataB.x += fx;
        velDataB.y += fy;
    }
}
