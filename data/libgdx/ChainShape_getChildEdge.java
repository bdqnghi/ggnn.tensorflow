/**
 * Get a child edge.
 */
public void getChildEdge(EdgeShape edge, int index) {
    assert (0 <= index && index < m_count - 1);
    edge.m_radius = m_radius;
    final Vec2 v0 = m_vertices[index + 0];
    final Vec2 v1 = m_vertices[index + 1];
    edge.m_vertex1.x = v0.x;
    edge.m_vertex1.y = v0.y;
    edge.m_vertex2.x = v1.x;
    edge.m_vertex2.y = v1.y;
    if (index > 0) {
        Vec2 v = m_vertices[index - 1];
        edge.m_vertex0.x = v.x;
        edge.m_vertex0.y = v.y;
        edge.m_hasVertex0 = true;
    } else {
        edge.m_vertex0.x = m_prevVertex.x;
        edge.m_vertex0.y = m_prevVertex.y;
        edge.m_hasVertex0 = m_hasPrevVertex;
    }
    if (index < m_count - 2) {
        Vec2 v = m_vertices[index + 2];
        edge.m_vertex3.x = v.x;
        edge.m_vertex3.y = v.y;
        edge.m_hasVertex3 = true;
    } else {
        edge.m_vertex3.x = m_nextVertex.x;
        edge.m_vertex3.y = m_nextVertex.y;
        edge.m_hasVertex3 = m_hasNextVertex;
    }
}
