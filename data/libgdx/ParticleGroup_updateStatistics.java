public void updateStatistics() {
    if (m_timestamp != m_system.m_timestamp) {
        float m = m_system.getParticleMass();
        m_mass = 0;
        m_center.setZero();
        m_linearVelocity.setZero();
        for (int i = m_firstIndex; i < m_lastIndex; i++) {
            m_mass += m;
            Vec2 pos = m_system.m_positionBuffer.data[i];
            m_center.x += m * pos.x;
            m_center.y += m * pos.y;
            Vec2 vel = m_system.m_velocityBuffer.data[i];
            m_linearVelocity.x += m * vel.x;
            m_linearVelocity.y += m * vel.y;
        }
        if (m_mass > 0) {
            m_center.x *= 1 / m_mass;
            m_center.y *= 1 / m_mass;
            m_linearVelocity.x *= 1 / m_mass;
            m_linearVelocity.y *= 1 / m_mass;
        }
        m_inertia = 0;
        m_angularVelocity = 0;
        for (int i = m_firstIndex; i < m_lastIndex; i++) {
            Vec2 pos = m_system.m_positionBuffer.data[i];
            Vec2 vel = m_system.m_velocityBuffer.data[i];
            float px = pos.x - m_center.x;
            float py = pos.y - m_center.y;
            float vx = vel.x - m_linearVelocity.x;
            float vy = vel.y - m_linearVelocity.y;
            m_inertia += m * (px * px + py * py);
            m_angularVelocity += m * (px * vy - py * vx);
        }
        if (m_inertia > 0) {
            m_angularVelocity *= 1 / m_inertia;
        }
        m_timestamp = m_system.m_timestamp;
    }
}
