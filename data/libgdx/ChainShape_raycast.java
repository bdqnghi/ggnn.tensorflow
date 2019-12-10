@Override
public boolean raycast(RayCastOutput output, RayCastInput input, Transform xf, int childIndex) {
    assert (childIndex < m_count);
    final EdgeShape edgeShape = pool0;
    int i1 = childIndex;
    int i2 = childIndex + 1;
    if (i2 == m_count) {
        i2 = 0;
    }
    Vec2 v = m_vertices[i1];
    edgeShape.m_vertex1.x = v.x;
    edgeShape.m_vertex1.y = v.y;
    Vec2 v1 = m_vertices[i2];
    edgeShape.m_vertex2.x = v1.x;
    edgeShape.m_vertex2.y = v1.y;
    return edgeShape.raycast(output, input, xf, 0);
}
