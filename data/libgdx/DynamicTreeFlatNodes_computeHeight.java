private final int computeHeight(int node) {
    assert (0 <= node && node < m_nodeCapacity);
    if (m_child1[node] == NULL_NODE) {
        return 0;
    }
    int height1 = computeHeight(m_child1[node]);
    int height2 = computeHeight(m_child2[node]);
    return 1 + MathUtils.max(height1, height2);
}
