private void validateMetrics(int node) {
    if (node == NULL_NODE) {
        return;
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
    assert (child2 != child1 && 0 <= child2 && child2 < m_nodeCapacity);
    int height1 = m_height[child1];
    int height2 = m_height[child2];
    int height;
    height = 1 + MathUtils.max(height1, height2);
    assert (m_height[node] == height);
    AABB aabb = new AABB();
    aabb.combine(m_aabb[child1], m_aabb[child2]);
    assert (aabb.lowerBound.equals(m_aabb[node].lowerBound));
    assert (aabb.upperBound.equals(m_aabb[node].upperBound));
    validateMetrics(child1);
    validateMetrics(child2);
}
