/**
 * returns a node to the pool
 */
private final void freeNode(DynamicTreeNode node) {
    assert (node != null);
    assert (0 < m_nodeCount);
    node.parent = m_freeList != NULL_NODE ? m_nodes[m_freeList] : null;
    node.height = -1;
    m_freeList = node.id;
    m_nodeCount--;
}
