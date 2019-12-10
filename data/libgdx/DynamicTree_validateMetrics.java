private void validateMetrics(DynamicTreeNode node) {
    if (node == null) {
        return;
    }
    DynamicTreeNode child1 = node.child1;
    DynamicTreeNode child2 = node.child2;
    if (node.child1 == null) {
        assert (child1 == null);
        assert (child2 == null);
        assert (node.height == 0);
        return;
    }
    assert (child1 != null && 0 <= child1.id && child1.id < m_nodeCapacity);
    assert (child2 != null && 0 <= child2.id && child2.id < m_nodeCapacity);
    int height1 = child1.height;
    int height2 = child2.height;
    int height;
    height = 1 + MathUtils.max(height1, height2);
    assert (node.height == height);
    AABB aabb = new AABB();
    aabb.combine(child1.aabb, child2.aabb);
    assert (aabb.lowerBound.equals(node.aabb.lowerBound));
    assert (aabb.upperBound.equals(node.aabb.upperBound));
    validateMetrics(child1);
    validateMetrics(child2);
}
