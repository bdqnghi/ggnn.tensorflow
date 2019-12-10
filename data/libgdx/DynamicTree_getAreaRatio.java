@Override
public float getAreaRatio() {
    if (m_root == null) {
        return 0.0f;
    }
    final DynamicTreeNode root = m_root;
    float rootArea = root.aabb.getPerimeter();
    float totalArea = 0.0f;
    for (int i = 0; i < m_nodeCapacity; ++i) {
        final DynamicTreeNode node = m_nodes[i];
        if (node.height < 0) {
            // Free node in pool
            continue;
        }
        totalArea += node.aabb.getPerimeter();
    }
    return totalArea / rootArea;
}
