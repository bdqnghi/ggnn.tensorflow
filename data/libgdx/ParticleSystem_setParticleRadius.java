public void setParticleRadius(float radius) {
    m_particleDiameter = 2 * radius;
    m_squaredDiameter = m_particleDiameter * m_particleDiameter;
    m_inverseDiameter = 1 / m_particleDiameter;
}
