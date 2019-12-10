@Override
public final void destroyProxy(int proxyId) {
    assert (0 <= proxyId && proxyId < m_nodeCapacity);
    assert (m_child1[proxyId] == NULL_NODE);
    removeLeaf(proxyId);
    freeNode(proxyId);
}
