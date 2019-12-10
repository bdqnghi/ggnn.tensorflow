@Override
public final Object getUserData(int proxyId) {
    assert (0 <= proxyId && proxyId < m_nodeCount);
    return m_userData[proxyId];
}
