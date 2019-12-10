/**
 * Establish connectivity to a vertex that follows the last vertex. Don't call this for loops.
 *
 * @param nextVertex
 */
public void setNextVertex(final Vec2 nextVertex) {
    m_nextVertex.set(nextVertex);
    m_hasNextVertex = true;
}
