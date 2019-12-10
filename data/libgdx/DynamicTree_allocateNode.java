private final DynamicTreeNode allocateNode() {
    if (m_freeList == NULL_NODE) {
        assert (m_nodeCount == m_nodeCapacity);
        DynamicTreeNode[] old = m_nodes;
        m_nodeCapacity *= 2;
        m_nodes = new DynamicTreeNode[m_nodeCapacity];
        System.arraycopy(old, 0, m_nodes, 0, old.length);
        // Build a linked list for the free list.
        for (int i = m_nodeCapacity - 1; i >= m_nodeCount; i--) {
            m_nodes[i] = new DynamicTreeNode(i);
            m_nodes[i].parent = (i == m_nodeCapacity - 1) ? null : m_nodes[i + 1];
            m_nodes[i].height = -1;
        }
        m_freeList = m_nodeCount;
    }
    int nodeId = m_freeList;
    final DynamicTreeNode treeNode = m_nodes[nodeId];
    m_freeList = treeNode.parent != null ? treeNode.parent.id : NULL_NODE;
    treeNode.parent = null;
    treeNode.child1 = null;
    treeNode.child2 = null;
    treeNode.height = 0;
    treeNode.userData = null;
    ++m_nodeCount;
    return treeNode;
}
