/**
 * Get the supporting vertex in the given direction.
 *
 * @param d
 * @return
 */
public final Vec2 getSupportVertex(final Vec2 d) {
    int bestIndex = 0;
    float bestValue = Vec2.dot(m_vertices[0], d);
    for (int i = 1; i < m_count; i++) {
        float value = Vec2.dot(m_vertices[i], d);
        if (value > bestValue) {
            bestIndex = i;
            bestValue = value;
        }
    }
    return m_vertices[bestIndex];
}
