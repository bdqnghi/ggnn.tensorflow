@Override
public Shape clone() {
    ChainShape clone = new ChainShape();
    clone.createChain(m_vertices, m_count);
    clone.m_prevVertex.set(m_prevVertex);
    clone.m_nextVertex.set(m_nextVertex);
    clone.m_hasPrevVertex = m_hasPrevVertex;
    clone.m_hasNextVertex = m_hasNextVertex;
    return clone;
}
