/**
 * Get the supporting vertex index in the given direction.
 *
 * @param d
 * @return
 */
public final int getSupport(final Vec2 d) {
    int bestIndex = 0;
    float bestValue = Vec2.dot(m_vertices[0], d);
    for (int i = 1; i < m_count; i++) {
        float value = Vec2.dot(m_vertices[i], d);
        if (value > bestValue) {
            bestIndex = i;
            bestValue = value;
        }
    }
    return bestIndex;
}
