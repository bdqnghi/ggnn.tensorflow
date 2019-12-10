public float computeParticleCollisionEnergy() {
    float sum_v2 = 0;
    for (int k = 0; k < m_contactCount; k++) {
        final ParticleContact contact = m_contactBuffer[k];
        int a = contact.indexA;
        int b = contact.indexB;
        Vec2 n = contact.normal;
        final Vec2 va = m_velocityBuffer.data[a];
        final Vec2 vb = m_velocityBuffer.data[b];
        final float vx = vb.x - va.x;
        final float vy = vb.y - va.y;
        float vn = vx * n.x + vy * n.y;
        if (vn < 0) {
            sum_v2 += vn * vn;
        }
    }
    return 0.5f * getParticleMass() * sum_v2;
}
