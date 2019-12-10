/**
 * Ray-cast the world for all particles in the path of the ray. Your callback controls whether you
 * get the closest point, any point, or n-points.
 *
 * @param particleCallback the particle callback class.
 * @param point1 the ray starting point
 * @param point2 the ray ending point
 */
public void raycast(ParticleRaycastCallback particleCallback, Vec2 point1, Vec2 point2) {
    m_particleSystem.raycast(particleCallback, point1, point2);
}
