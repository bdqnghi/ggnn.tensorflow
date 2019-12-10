private boolean constrainEdges(Position[] positions) {
    float perimeter = 0.0f;
    for (int i = 0; i < bodies.length; ++i) {
        final int next = (i == bodies.length - 1) ? 0 : i + 1;
        float dx = positions[bodies[next].m_islandIndex].c.x - positions[bodies[i].m_islandIndex].c.x;
        float dy = positions[bodies[next].m_islandIndex].c.y - positions[bodies[i].m_islandIndex].c.y;
        float dist = MathUtils.sqrt(dx * dx + dy * dy);
        if (dist < Settings.EPSILON) {
            dist = 1.0f;
        }
        normals[i].x = dy / dist;
        normals[i].y = -dx / dist;
        perimeter += dist;
    }
    final Vec2 delta = pool.popVec2();
    float deltaArea = targetVolume - getSolverArea(positions);
    // *relaxationFactor
    float toExtrude = 0.5f * deltaArea / perimeter;
    // float sumdeltax = 0.0f;
    boolean done = true;
    for (int i = 0; i < bodies.length; ++i) {
        final int next = (i == bodies.length - 1) ? 0 : i + 1;
        delta.set(toExtrude * (normals[i].x + normals[next].x), toExtrude * (normals[i].y + normals[next].y));
        // sumdeltax += dx;
        float normSqrd = delta.lengthSquared();
        if (normSqrd > Settings.maxLinearCorrection * Settings.maxLinearCorrection) {
            delta.mulLocal(Settings.maxLinearCorrection / MathUtils.sqrt(normSqrd));
        }
        if (normSqrd > Settings.linearSlop * Settings.linearSlop) {
            done = false;
        }
        positions[bodies[next].m_islandIndex].c.x += delta.x;
        positions[bodies[next].m_islandIndex].c.y += delta.y;
    // bodies[next].m_linearVelocity.x += delta.x * step.inv_dt;
    // bodies[next].m_linearVelocity.y += delta.y * step.inv_dt;
    }
    pool.pushVec2(1);
    // System.out.println(sumdeltax);
    return done;
}
