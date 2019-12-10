private void validateStructure(DynamicTreeNode node) {
    if (node == null) {
        return;
    }
    assert (node == m_nodes[node.id]);
    if (node == m_root) {
        assert (node.parent == null);
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
    assert (child1.parent == node);
    assert (child2.parent == node);
    validateStructure(child1);
    validateStructure(child2);
}
