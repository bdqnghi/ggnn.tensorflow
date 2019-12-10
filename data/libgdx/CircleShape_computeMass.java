@Override
public final void computeMass(final MassData massData, final float density) {
    massData.mass = density * Settings.PI * m_radius * m_radius;
    massData.center.x = m_p.x;
    massData.center.y = m_p.y;
    // inertia about the local origin
    // massData.I = massData.mass * (0.5f * m_radius * m_radius + Vec2.dot(m_p, m_p));
    massData.I = massData.mass * (0.5f * m_radius * m_radius + (m_p.x * m_p.x + m_p.y * m_p.y));
}
