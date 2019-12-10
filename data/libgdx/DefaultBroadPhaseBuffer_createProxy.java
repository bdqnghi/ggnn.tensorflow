@Override
public final int createProxy(final AABB aabb, Object userData) {
    int proxyId = m_tree.createProxy(aabb, userData);
    ++m_proxyCount;
    bufferMove(proxyId);
    return proxyId;
}
