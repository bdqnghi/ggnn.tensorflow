float getCriticalPressure(final TimeStep step) {
    return m_density * getCriticalVelocitySquared(step);
}
