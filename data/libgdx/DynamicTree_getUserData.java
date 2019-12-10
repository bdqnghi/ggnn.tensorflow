@Override
public final Object getUserData(int proxyId) {
    assert (0 <= proxyId && proxyId < m_nodeCapacity);
    return m_nodes[proxyId].userData;
}
