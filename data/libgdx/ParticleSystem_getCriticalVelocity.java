float getCriticalVelocity(final TimeStep step) {
    return m_particleDiameter * step.inv_dt;
}
