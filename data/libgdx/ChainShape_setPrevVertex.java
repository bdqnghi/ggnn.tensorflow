/**
 * Establish connectivity to a vertex that precedes the first vertex. Don't call this for loops.
 *
 * @param prevVertex
 */
public void setPrevVertex(final Vec2 prevVertex) {
    m_prevVertex.set(prevVertex);
    m_hasPrevVertex = true;
}
