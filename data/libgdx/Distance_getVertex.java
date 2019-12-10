/**
 * Get a vertex by index. Used by Distance.
 *
 * @param index
 * @return
 */
public final Vec2 getVertex(int index) {
    assert (0 <= index && index < m_count);
    return m_vertices[index];
}
