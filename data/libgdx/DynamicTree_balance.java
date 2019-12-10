// Perform a left or right rotation if node A is imbalanced.
// Returns the new root index.
private DynamicTreeNode balance(DynamicTreeNode iA) {
    assert (iA != null);
    DynamicTreeNode A = iA;
    if (A.child1 == null || A.height < 2) {
        return iA;
    }
    DynamicTreeNode iB = A.child1;
    DynamicTreeNode iC = A.child2;
    assert (0 <= iB.id && iB.id < m_nodeCapacity);
    assert (0 <= iC.id && iC.id < m_nodeCapacity);
    DynamicTreeNode B = iB;
    DynamicTreeNode C = iC;
    int balance = C.height - B.height;
    // Rotate C up
    if (balance > 1) {
        DynamicTreeNode iF = C.child1;
        DynamicTreeNode iG = C.child2;
        DynamicTreeNode F = iF;
        DynamicTreeNode G = iG;
        assert (F != null);
        assert (G != null);
        assert (0 <= iF.id && iF.id < m_nodeCapacity);
        assert (0 <= iG.id && iG.id < m_nodeCapacity);
        // Swap A and C
        C.child1 = iA;
        C.parent = A.parent;
        A.parent = iC;
        // A's old parent should point to C
        if (C.parent != null) {
            if (C.parent.child1 == iA) {
                C.parent.child1 = iC;
            } else {
                assert (C.parent.child2 == iA);
                C.parent.child2 = iC;
            }
        } else {
            m_root = iC;
        }
        // Rotate
        if (F.height > G.height) {
            C.child2 = iF;
            A.child2 = iG;
            G.parent = iA;
            A.aabb.combine(B.aabb, G.aabb);
            C.aabb.combine(A.aabb, F.aabb);
            A.height = 1 + MathUtils.max(B.height, G.height);
            C.height = 1 + MathUtils.max(A.height, F.height);
        } else {
            C.child2 = iG;
            A.child2 = iF;
            F.parent = iA;
            A.aabb.combine(B.aabb, F.aabb);
            C.aabb.combine(A.aabb, G.aabb);
            A.height = 1 + MathUtils.max(B.height, F.height);
            C.height = 1 + MathUtils.max(A.height, G.height);
        }
        return iC;
    }
    // Rotate B up
    if (balance < -1) {
        DynamicTreeNode iD = B.child1;
        DynamicTreeNode iE = B.child2;
        DynamicTreeNode D = iD;
        DynamicTreeNode E = iE;
        assert (0 <= iD.id && iD.id < m_nodeCapacity);
        assert (0 <= iE.id && iE.id < m_nodeCapacity);
        // Swap A and B
        B.child1 = iA;
        B.parent = A.parent;
        A.parent = iB;
        // A's old parent should point to B
        if (B.parent != null) {
            if (B.parent.child1 == iA) {
                B.parent.child1 = iB;
            } else {
                assert (B.parent.child2 == iA);
                B.parent.child2 = iB;
            }
        } else {
            m_root = iB;
        }
        // Rotate
        if (D.height > E.height) {
            B.child2 = iD;
            A.child1 = iE;
            E.parent = iA;
            A.aabb.combine(C.aabb, E.aabb);
            B.aabb.combine(A.aabb, D.aabb);
            A.height = 1 + MathUtils.max(C.height, E.height);
            B.height = 1 + MathUtils.max(A.height, D.height);
        } else {
            B.child2 = iE;
            A.child1 = iD;
            D.parent = iA;
            A.aabb.combine(C.aabb, D.aabb);
            B.aabb.combine(A.aabb, E.aabb);
            A.height = 1 + MathUtils.max(C.height, D.height);
            B.height = 1 + MathUtils.max(A.height, E.height);
        }
        return iB;
    }
    return iA;
}
