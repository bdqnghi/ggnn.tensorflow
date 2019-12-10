private final void insertLeaf(int leaf_index) {
    DynamicTreeNode leaf = m_nodes[leaf_index];
    if (m_root == null) {
        m_root = leaf;
        m_root.parent = null;
        return;
    }
    // find the best sibling
    AABB leafAABB = leaf.aabb;
    DynamicTreeNode index = m_root;
    while (index.child1 != null) {
        final DynamicTreeNode node = index;
        DynamicTreeNode child1 = node.child1;
        DynamicTreeNode child2 = node.child2;
        float area = node.aabb.getPerimeter();
        combinedAABB.combine(node.aabb, leafAABB);
        float combinedArea = combinedAABB.getPerimeter();
        // Cost of creating a new parent for this node and the new leaf
        float cost = 2.0f * combinedArea;
        // Minimum cost of pushing the leaf further down the tree
        float inheritanceCost = 2.0f * (combinedArea - area);
        // Cost of descending into child1
        float cost1;
        if (child1.child1 == null) {
            combinedAABB.combine(leafAABB, child1.aabb);
            cost1 = combinedAABB.getPerimeter() + inheritanceCost;
        } else {
            combinedAABB.combine(leafAABB, child1.aabb);
            float oldArea = child1.aabb.getPerimeter();
            float newArea = combinedAABB.getPerimeter();
            cost1 = (newArea - oldArea) + inheritanceCost;
        }
        // Cost of descending into child2
        float cost2;
        if (child2.child1 == null) {
            combinedAABB.combine(leafAABB, child2.aabb);
            cost2 = combinedAABB.getPerimeter() + inheritanceCost;
        } else {
            combinedAABB.combine(leafAABB, child2.aabb);
            float oldArea = child2.aabb.getPerimeter();
            float newArea = combinedAABB.getPerimeter();
            cost2 = newArea - oldArea + inheritanceCost;
        }
        // Descend according to the minimum cost.
        if (cost < cost1 && cost < cost2) {
            break;
        }
        // Descend
        if (cost1 < cost2) {
            index = child1;
        } else {
            index = child2;
        }
    }
    DynamicTreeNode sibling = index;
    DynamicTreeNode oldParent = m_nodes[sibling.id].parent;
    final DynamicTreeNode newParent = allocateNode();
    newParent.parent = oldParent;
    newParent.userData = null;
    newParent.aabb.combine(leafAABB, sibling.aabb);
    newParent.height = sibling.height + 1;
    if (oldParent != null) {
        // The sibling was not the root.
        if (oldParent.child1 == sibling) {
            oldParent.child1 = newParent;
        } else {
            oldParent.child2 = newParent;
        }
        newParent.child1 = sibling;
        newParent.child2 = leaf;
        sibling.parent = newParent;
        leaf.parent = newParent;
    } else {
        // The sibling was the root.
        newParent.child1 = sibling;
        newParent.child2 = leaf;
        sibling.parent = newParent;
        leaf.parent = newParent;
        m_root = newParent;
    }
    // Walk back up the tree fixing heights and AABBs
    index = leaf.parent;
    while (index != null) {
        index = balance(index);
        DynamicTreeNode child1 = index.child1;
        DynamicTreeNode child2 = index.child2;
        assert (child1 != null);
        assert (child2 != null);
        index.height = 1 + MathUtils.max(child1.height, child2.height);
        index.aabb.combine(child1.aabb, child2.aabb);
        index = index.parent;
    }
// validate();
}
