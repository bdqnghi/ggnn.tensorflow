void solvePowder(final TimeStep step) {
    float powderStrength = m_powderStrength * getCriticalVelocity(step);
    float minWeight = 1.0f - Settings.particleStride;
    for (int k = 0; k < m_bodyContactCount; k++) {
        final ParticleBodyContact contact = m_bodyContactBuffer[k];
        int a = contact.index;
        if ((m_flagsBuffer.data[a] & ParticleType.b2_powderParticle) != 0) {
            float w = contact.weight;
            if (w > minWeight) {
                Body b = contact.body;
                float m = contact.mass;
                Vec2 p = m_positionBuffer.data[a];
                Vec2 n = contact.normal;
                final Vec2 f = tempVec;
                final Vec2 va = m_velocityBuffer.data[a];
                final float inter = powderStrength * m * (w - minWeight);
                final float pInvMass = getParticleInvMass();
                f.x = inter * n.x;
                f.y = inter * n.y;
                va.x -= pInvMass * f.x;
                va.y -= pInvMass * f.y;
                b.applyLinearImpulse(f, p, true);
            }
        }
    }
    for (int k = 0; k < m_contactCount; k++) {
        final ParticleContact contact = m_contactBuffer[k];
        if ((contact.flags & ParticleType.b2_powderParticle) != 0) {
            float w = contact.weight;
            if (w > minWeight) {
                int a = contact.indexA;
                int b = contact.indexB;
                Vec2 n = contact.normal;
                final Vec2 va = m_velocityBuffer.data[a];
                final Vec2 vb = m_velocityBuffer.data[b];
                final float inter = powderStrength * (w - minWeight);
                final float fx = inter * n.x;
                final float fy = inter * n.y;
                va.x -= fx;
                va.y -= fy;
                vb.x += fx;
                vb.y += fy;
            }
        }
    }
}
