public void solveWall(TimeStep step) {
    for (int i = 0; i < m_count; i++) {
        if ((m_flagsBuffer.data[i] & ParticleType.b2_wallParticle) != 0) {
            final Vec2 r = m_velocityBuffer.data[i];
            r.x = 0.0f;
            r.y = 0.0f;
        }
    }
}
