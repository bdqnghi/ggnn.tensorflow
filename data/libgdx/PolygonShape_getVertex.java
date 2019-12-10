/**
 * Get a vertex by index.
 *
 * @param index
 * @return
 */
public final Vec2 getVertex(final int index) {
    assert (0 <= index && index < m_count);
    return m_vertices[index];
}
