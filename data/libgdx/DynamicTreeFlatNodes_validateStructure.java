private void validateStructure(int node) {
    if (node == NULL_NODE) {
        return;
    }
    if (node == m_root) {
        assert (m_parent[node] == NULL_NODE);
    }
    int child1 = m_child1[node];
    int child2 = m_child2[node];
    if (child1 == NULL_NODE) {
        assert (child1 == NULL_NODE);
        assert (child2 == NULL_NODE);
        assert (m_height[node] == 0);
        return;
    }
    assert (child1 != NULL_NODE && 0 <= child1 && child1 < m_nodeCapacity);
    assert (child2 != NULL_NODE && 0 <= child2 && child2 < m_nodeCapacity);
    assert (m_parent[child1] == node);
    assert (m_parent[child2] == node);
    validateStructure(child1);
    validateStructure(child2);
}
