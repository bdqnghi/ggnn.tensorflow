@Override
public void initVelocityConstraints(final SolverData step) {
    Velocity[] velocities = step.velocities;
    Position[] positions = step.positions;
    final Vec2[] d = pool.getVec2Array(bodies.length);
    for (int i = 0; i < bodies.length; ++i) {
        final int prev = (i == 0) ? bodies.length - 1 : i - 1;
        final int next = (i == bodies.length - 1) ? 0 : i + 1;
        d[i].set(positions[bodies[next].m_islandIndex].c);
        d[i].subLocal(positions[bodies[prev].m_islandIndex].c);
    }
    if (step.step.warmStarting) {
        m_impulse *= step.step.dtRatio;
        // m_impulse = lambda;
        for (int i = 0; i < bodies.length; ++i) {
            velocities[bodies[i].m_islandIndex].v.x += bodies[i].m_invMass * d[i].y * .5f * m_impulse;
            velocities[bodies[i].m_islandIndex].v.y += bodies[i].m_invMass * -d[i].x * .5f * m_impulse;
        }
    } else {
        m_impulse = 0.0f;
    }
}
