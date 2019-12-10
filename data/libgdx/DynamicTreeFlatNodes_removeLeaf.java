private final void removeLeaf(int leaf) {
    if (leaf == m_root) {
        m_root = NULL_NODE;
        return;
    }
    int parent = m_parent[leaf];
    int grandParent = m_parent[parent];
    int parentChild1 = m_child1[parent];
    int parentChild2 = m_child2[parent];
    int sibling;
    if (parentChild1 == leaf) {
        sibling = parentChild2;
    } else {
        sibling = parentChild1;
    }
    if (grandParent != NULL_NODE) {
        // Destroy parent and connect sibling to grandParent.
        if (m_child1[grandParent] == parent) {
            m_child1[grandParent] = sibling;
        } else {
            m_child2[grandParent] = sibling;
        }
        m_parent[sibling] = grandParent;
        freeNode(parent);
        // Adjust ancestor bounds.
        int index = grandParent;
        while (index != NULL_NODE) {
            index = balance(index);
            int child1 = m_child1[index];
            int child2 = m_child2[index];
            m_aabb[index].combine(m_aabb[child1], m_aabb[child2]);
            m_height[index] = 1 + MathUtils.max(m_height[child1], m_height[child2]);
            index = m_parent[index];
        }
    } else {
        m_root = sibling;
        m_parent[sibling] = NULL_NODE;
        freeNode(parent);
    }
// validate();
}
