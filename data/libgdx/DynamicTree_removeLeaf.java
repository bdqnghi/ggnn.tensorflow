private final void removeLeaf(DynamicTreeNode leaf) {
    if (leaf == m_root) {
        m_root = null;
        return;
    }
    DynamicTreeNode parent = leaf.parent;
    DynamicTreeNode grandParent = parent.parent;
    DynamicTreeNode sibling;
    if (parent.child1 == leaf) {
        sibling = parent.child2;
    } else {
        sibling = parent.child1;
    }
    if (grandParent != null) {
        // Destroy parent and connect sibling to grandParent.
        if (grandParent.child1 == parent) {
            grandParent.child1 = sibling;
        } else {
            grandParent.child2 = sibling;
        }
        sibling.parent = grandParent;
        freeNode(parent);
        // Adjust ancestor bounds.
        DynamicTreeNode index = grandParent;
        while (index != null) {
            index = balance(index);
            DynamicTreeNode child1 = index.child1;
            DynamicTreeNode child2 = index.child2;
            index.aabb.combine(child1.aabb, child2.aabb);
            index.height = 1 + MathUtils.max(child1.height, child2.height);
            index = index.parent;
        }
    } else {
        m_root = sibling;
        sibling.parent = null;
        freeNode(parent);
    }
// validate();
}
