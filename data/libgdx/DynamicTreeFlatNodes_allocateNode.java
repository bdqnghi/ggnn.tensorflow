// /**
// * Build an optimal tree. Very expensive. For testing.
// */
// public void rebuildBottomUp() {
// int[] nodes = new int[m_nodeCount];
// int count = 0;
// 
// // Build array of leaves. Free the rest.
// for (int i = 0; i < m_nodeCapacity; ++i) {
// if (m_nodes[i].height < 0) {
// // free node in pool
// continue;
// }
// 
// DynamicTreeNode node = m_nodes[i];
// if (node.isLeaf()) {
// node.parent = null;
// nodes[count] = i;
// ++count;
// } else {
// freeNode(node);
// }
// }
// 
// AABB b = new AABB();
// while (count > 1) {
// float minCost = Float.MAX_VALUE;
// int iMin = -1, jMin = -1;
// for (int i = 0; i < count; ++i) {
// AABB aabbi = m_nodes[nodes[i]].aabb;
// 
// for (int j = i + 1; j < count; ++j) {
// AABB aabbj = m_nodes[nodes[j]].aabb;
// b.combine(aabbi, aabbj);
// float cost = b.getPerimeter();
// if (cost < minCost) {
// iMin = i;
// jMin = j;
// minCost = cost;
// }
// }
// }
// 
// int index1 = nodes[iMin];
// int index2 = nodes[jMin];
// DynamicTreeNode child1 = m_nodes[index1];
// DynamicTreeNode child2 = m_nodes[index2];
// 
// DynamicTreeNode parent = allocateNode();
// parent.child1 = child1;
// parent.child2 = child2;
// parent.height = 1 + MathUtils.max(child1.height, child2.height);
// parent.aabb.combine(child1.aabb, child2.aabb);
// parent.parent = null;
// 
// child1.parent = parent;
// child2.parent = parent;
// 
// nodes[jMin] = nodes[count - 1];
// nodes[iMin] = parent.id;
// --count;
// }
// 
// m_root = m_nodes[nodes[0]];
// 
// validate();
// }
private final int allocateNode() {
    if (m_freeList == NULL_NODE) {
        assert (m_nodeCount == m_nodeCapacity);
        m_nodeCapacity *= 2;
        expandBuffers(m_nodeCount, m_nodeCapacity);
    }
    assert (m_freeList != NULL_NODE);
    int node = m_freeList;
    m_freeList = m_parent[node];
    m_parent[node] = NULL_NODE;
    m_child1[node] = NULL_NODE;
    m_height[node] = 0;
    ++m_nodeCount;
    return node;
}
