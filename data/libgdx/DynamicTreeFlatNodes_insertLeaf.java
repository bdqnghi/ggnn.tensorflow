private final void insertLeaf(int leaf) {
    if (m_root == NULL_NODE) {
        m_root = leaf;
        m_parent[m_root] = NULL_NODE;
        return;
    }
    // find the best sibling
    AABB leafAABB = m_aabb[leaf];
    int index = m_root;
    while (m_child1[index] != NULL_NODE) {
        final int node = index;
        int child1 = m_child1[node];
        int child2 = m_child2[node];
        final AABB nodeAABB = m_aabb[node];
        float area = nodeAABB.getPerimeter();
        combinedAABB.combine(nodeAABB, leafAABB);
        float combinedArea = combinedAABB.getPerimeter();
        // Cost of creating a new parent for this node and the new leaf
        float cost = 2.0f * combinedArea;
        // Minimum cost of pushing the leaf further down the tree
        float inheritanceCost = 2.0f * (combinedArea - area);
        // Cost of descending into child1
        float cost1;
        AABB child1AABB = m_aabb[child1];
        if (m_child1[child1] == NULL_NODE) {
            combinedAABB.combine(leafAABB, child1AABB);
            cost1 = combinedAABB.getPerimeter() + inheritanceCost;
        } else {
            combinedAABB.combine(leafAABB, child1AABB);
            float oldArea = child1AABB.getPerimeter();
            float newArea = combinedAABB.getPerimeter();
            cost1 = (newArea - oldArea) + inheritanceCost;
        }
        // Cost of descending into child2
        float cost2;
        AABB child2AABB = m_aabb[child2];
        if (m_child1[child2] == NULL_NODE) {
            combinedAABB.combine(leafAABB, child2AABB);
            cost2 = combinedAABB.getPerimeter() + inheritanceCost;
        } else {
            combinedAABB.combine(leafAABB, child2AABB);
            float oldArea = child2AABB.getPerimeter();
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
    int sibling = index;
    int oldParent = m_parent[sibling];
    final int newParent = allocateNode();
    m_parent[newParent] = oldParent;
    m_userData[newParent] = null;
    m_aabb[newParent].combine(leafAABB, m_aabb[sibling]);
    m_height[newParent] = m_height[sibling] + 1;
    if (oldParent != NULL_NODE) {
        // The sibling was not the root.
        if (m_child1[oldParent] == sibling) {
            m_child1[oldParent] = newParent;
        } else {
            m_child2[oldParent] = newParent;
        }
        m_child1[newParent] = sibling;
        m_child2[newParent] = leaf;
        m_parent[sibling] = newParent;
        m_parent[leaf] = newParent;
    } else {
        // The sibling was the root.
        m_child1[newParent] = sibling;
        m_child2[newParent] = leaf;
        m_parent[sibling] = newParent;
        m_parent[leaf] = newParent;
        m_root = newParent;
    }
    // Walk back up the tree fixing heights and AABBs
    index = m_parent[leaf];
    while (index != NULL_NODE) {
        index = balance(index);
        int child1 = m_child1[index];
        int child2 = m_child2[index];
        assert (child1 != NULL_NODE);
        assert (child2 != NULL_NODE);
        m_height[index] = 1 + MathUtils.max(m_height[child1], m_height[child2]);
        m_aabb[index].combine(m_aabb[child1], m_aabb[child2]);
        index = m_parent[index];
    }
// validate();
}
