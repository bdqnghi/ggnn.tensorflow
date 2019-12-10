@Override
public final void destroyProxy(int proxyId) {
    assert (0 <= proxyId && proxyId < m_nodeCapacity);
    DynamicTreeNode node = m_nodes[proxyId];
    assert (node.child1 == null);
    removeLeaf(node);
    freeNode(node);
}
