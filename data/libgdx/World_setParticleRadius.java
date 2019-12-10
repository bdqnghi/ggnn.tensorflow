/**
 * Change the particle radius. You should set this only once, on world start. If you change the
 * radius during execution, existing particles may explode, shrink, or behave unexpectedly.
 *
 * @param radius
 */
public void setParticleRadius(float radius) {
    m_particleSystem.setParticleRadius(radius);
}
