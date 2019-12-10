@Override
public final AABB getFatAABB(int proxyId) {
    assert (0 <= proxyId && proxyId < m_nodeCount);
    return m_aabb[proxyId];
}
