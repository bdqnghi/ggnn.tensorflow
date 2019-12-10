void solveViscous(final TimeStep step) {
    float viscousStrength = m_viscousStrength;
    for (int k = 0; k < m_bodyContactCount; k++) {
        final ParticleBodyContact contact = m_bodyContactBuffer[k];
        int a = contact.index;
        if ((m_flagsBuffer.data[a] & ParticleType.b2_viscousParticle) != 0) {
            Body b = contact.body;
            float w = contact.weight;
            float m = contact.mass;
            Vec2 p = m_positionBuffer.data[a];
            final Vec2 va = m_velocityBuffer.data[a];
            final float tempX = p.x - b.m_sweep.c.x;
            final float tempY = p.y - b.m_sweep.c.y;
            final float vx = -b.m_angularVelocity * tempY + b.m_linearVelocity.x - va.x;
            final float vy = b.m_angularVelocity * tempX + b.m_linearVelocity.y - va.y;
            final Vec2 f = tempVec;
            final float pInvMass = getParticleInvMass();
            f.x = viscousStrength * m * w * vx;
            f.y = viscousStrength * m * w * vy;
            va.x += pInvMass * f.x;
            va.y += pInvMass * f.y;
            f.x = -f.x;
            f.y = -f.y;
            b.applyLinearImpulse(f, p, true);
        }
    }
    for (int k = 0; k < m_contactCount; k++) {
        final ParticleContact contact = m_contactBuffer[k];
        if ((contact.flags & ParticleType.b2_viscousParticle) != 0) {
            int a = contact.indexA;
            int b = contact.indexB;
            float w = contact.weight;
            final Vec2 va = m_velocityBuffer.data[a];
            final Vec2 vb = m_velocityBuffer.data[b];
            final float vx = vb.x - va.x;
            final float vy = vb.y - va.y;
            final float fx = viscousStrength * w * vx;
            final float fy = viscousStrength * w * vy;
            va.x += fx;
            va.y += fy;
            vb.x -= fx;
            vb.y -= fy;
        }
    }
}
