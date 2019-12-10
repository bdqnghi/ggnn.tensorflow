/**
 * Query the world for all particles that potentially overlap the provided AABB.
 *
 * @param particleCallback callback for particles.
 * @param aabb the query box.
 */
public void queryAABB(ParticleQueryCallback particleCallback, AABB aabb) {
    m_particleSystem.queryAABB(particleCallback, aabb);
}
