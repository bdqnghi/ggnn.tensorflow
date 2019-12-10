/**
 * Validate this tree. For testing.
 */
public void validate() {
    validateStructure(m_root);
    validateMetrics(m_root);
    int freeCount = 0;
    DynamicTreeNode freeNode = m_freeList != NULL_NODE ? m_nodes[m_freeList] : null;
    while (freeNode != null) {
        assert (0 <= freeNode.id && freeNode.id < m_nodeCapacity);
        assert (freeNode == m_nodes[freeNode.id]);
        freeNode = freeNode.parent;
        ++freeCount;
    }
    assert (getHeight() == computeHeight());
    assert (m_nodeCount + freeCount == m_nodeCapacity);
}
