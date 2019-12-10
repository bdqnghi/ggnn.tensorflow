private final int computeHeight(DynamicTreeNode node) {
    assert (0 <= node.id && node.id < m_nodeCapacity);
    if (node.child1 == null) {
        return 0;
    }
    int height1 = computeHeight(node.child1);
    int height2 = computeHeight(node.child2);
    return 1 + MathUtils.max(height1, height2);
}
