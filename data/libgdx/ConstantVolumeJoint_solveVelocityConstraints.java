@Override
public void solveVelocityConstraints(final SolverData step) {
    float crossMassSum = 0.0f;
    float dotMassSum = 0.0f;
    Velocity[] velocities = step.velocities;
    Position[] positions = step.positions;
    final Vec2[] d = pool.getVec2Array(bodies.length);
    for (int i = 0; i < bodies.length; ++i) {
        final int prev = (i == 0) ? bodies.length - 1 : i - 1;
        final int next = (i == bodies.length - 1) ? 0 : i + 1;
        d[i].set(positions[bodies[next].m_islandIndex].c);
        d[i].subLocal(positions[bodies[prev].m_islandIndex].c);
        dotMassSum += (d[i].lengthSquared()) / bodies[i].getMass();
        crossMassSum += Vec2.cross(velocities[bodies[i].m_islandIndex].v, d[i]);
    }
    float lambda = -2.0f * crossMassSum / dotMassSum;
    // System.out.println(crossMassSum + " " +dotMassSum);
    // lambda = MathUtils.clamp(lambda, -Settings.maxLinearCorrection,
    // Settings.maxLinearCorrection);
    m_impulse += lambda;
    // System.out.println(m_impulse);
    for (int i = 0; i < bodies.length; ++i) {
        velocities[bodies[i].m_islandIndex].v.x += bodies[i].m_invMass * d[i].y * .5f * lambda;
        velocities[bodies[i].m_islandIndex].v.y += bodies[i].m_invMass * -d[i].x * .5f * lambda;
    }
}
