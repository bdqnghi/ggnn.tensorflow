/**
 * returns a node to the pool
 */
private final void freeNode(int node) {
    assert (node != NULL_NODE);
    assert (0 < m_nodeCount);
    m_parent[node] = m_freeList != NULL_NODE ? m_freeList : NULL_NODE;
    m_height[node] = -1;
    m_freeList = node;
    m_nodeCount--;
}
