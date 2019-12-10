@Override
public final AABB getFatAABB(int proxyId) {
    assert (0 <= proxyId && proxyId < m_nodeCapacity);
    return m_nodes[proxyId].aabb;
}
