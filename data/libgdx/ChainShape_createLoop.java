/**
 * Create a loop. This automatically adjusts connectivity.
 *
 * @param vertices an array of vertices, these are copied
 * @param count the vertex count
 */
public void createLoop(final Vec2[] vertices, int count) {
    assert (m_vertices == null && m_count == 0);
    assert (count >= 3);
    m_count = count + 1;
    m_vertices = new Vec2[m_count];
    for (int i = 1; i < count; i++) {
        Vec2 v1 = vertices[i - 1];
        Vec2 v2 = vertices[i];
        // If the code crashes here, it means your vertices are too close together.
        if (MathUtils.distanceSquared(v1, v2) < Settings.linearSlop * Settings.linearSlop) {
            throw new RuntimeException("Vertices of chain shape are too close together");
        }
    }
    for (int i = 0; i < count; i++) {
        m_vertices[i] = new Vec2(vertices[i]);
    }
    m_vertices[count] = new Vec2(m_vertices[0]);
    m_prevVertex.set(m_vertices[m_count - 2]);
    m_nextVertex.set(m_vertices[1]);
    m_hasPrevVertex = true;
    m_hasNextVertex = true;
}
