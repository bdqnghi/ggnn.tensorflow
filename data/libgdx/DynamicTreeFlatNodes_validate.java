/**
 * Validate this tree. For testing.
 */
public void validate() {
    validateStructure(m_root);
    validateMetrics(m_root);
    int freeCount = 0;
    int freeNode = m_freeList;
    while (freeNode != NULL_NODE) {
        assert (0 <= freeNode && freeNode < m_nodeCapacity);
        freeNode = m_parent[freeNode];
        ++freeCount;
    }
    assert (getHeight() == computeHeight());
    assert (m_nodeCount + freeCount == m_nodeCapacity);
}
