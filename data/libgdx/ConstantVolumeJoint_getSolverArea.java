private float getSolverArea(Position[] positions) {
    float area = 0.0f;
    for (int i = 0; i < bodies.length; ++i) {
        final int next = (i == bodies.length - 1) ? 0 : i + 1;
        area += positions[bodies[i].m_islandIndex].c.x * positions[bodies[next].m_islandIndex].c.y - positions[bodies[next].m_islandIndex].c.x * positions[bodies[i].m_islandIndex].c.y;
    }
    area *= .5f;
    return area;
}
