void solveSolid(final TimeStep step) {
    // applies extra repulsive force from solid particle groups
    m_depthBuffer = requestParticleBuffer(m_depthBuffer);
    float ejectionStrength = step.inv_dt * m_ejectionStrength;
    for (int k = 0; k < m_contactCount; k++) {
        final ParticleContact contact = m_contactBuffer[k];
        int a = contact.indexA;
        int b = contact.indexB;
        if (m_groupBuffer[a] != m_groupBuffer[b]) {
            float w = contact.weight;
            Vec2 n = contact.normal;
            float h = m_depthBuffer[a] + m_depthBuffer[b];
            final Vec2 va = m_velocityBuffer.data[a];
            final Vec2 vb = m_velocityBuffer.data[b];
            final float inter = ejectionStrength * h * w;
            final float fx = inter * n.x;
            final float fy = inter * n.y;
            va.x -= fx;
            va.y -= fy;
            vb.x += fx;
            vb.y += fy;
        }
    }
}
