void solveDamping(TimeStep step) {
    // reduces normal velocity of each contact
    float damping = m_dampingStrength;
    for (int k = 0; k < m_bodyContactCount; k++) {
        final ParticleBodyContact contact = m_bodyContactBuffer[k];
        int a = contact.index;
        Body b = contact.body;
        float w = contact.weight;
        float m = contact.mass;
        Vec2 n = contact.normal;
        Vec2 p = m_positionBuffer.data[a];
        final float tempX = p.x - b.m_sweep.c.x;
        final float tempY = p.y - b.m_sweep.c.y;
        final Vec2 velA = m_velocityBuffer.data[a];
        // getLinearVelocityFromWorldPointToOut, with -= velA
        float vx = -b.m_angularVelocity * tempY + b.m_linearVelocity.x - velA.x;
        float vy = b.m_angularVelocity * tempX + b.m_linearVelocity.y - velA.y;
        // done
        float vn = vx * n.x + vy * n.y;
        if (vn < 0) {
            final Vec2 f = tempVec;
            f.x = damping * w * m * vn * n.x;
            f.y = damping * w * m * vn * n.y;
            final float invMass = getParticleInvMass();
            velA.x += invMass * f.x;
            velA.y += invMass * f.y;
            f.x = -f.x;
            f.y = -f.y;
            b.applyLinearImpulse(f, p, true);
        }
    }
    for (int k = 0; k < m_contactCount; k++) {
        final ParticleContact contact = m_contactBuffer[k];
        int a = contact.indexA;
        int b = contact.indexB;
        float w = contact.weight;
        Vec2 n = contact.normal;
        final Vec2 velA = m_velocityBuffer.data[a];
        final Vec2 velB = m_velocityBuffer.data[b];
        final float vx = velB.x - velA.x;
        final float vy = velB.y - velA.y;
        float vn = vx * n.x + vy * n.y;
        if (vn < 0) {
            float fx = damping * w * vn * n.x;
            float fy = damping * w * vn * n.y;
            velA.x += fx;
            velA.y += fy;
            velB.x -= fx;
            velB.y -= fy;
        }
    }
}
