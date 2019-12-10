// Perform a left or right rotation if node A is imbalanced.
// Returns the new root index.
private int balance(int iA) {
    assert (iA != NULL_NODE);
    int A = iA;
    if (m_child1[A] == NULL_NODE || m_height[A] < 2) {
        return iA;
    }
    int iB = m_child1[A];
    int iC = m_child2[A];
    assert (0 <= iB && iB < m_nodeCapacity);
    assert (0 <= iC && iC < m_nodeCapacity);
    int B = iB;
    int C = iC;
    int balance = m_height[C] - m_height[B];
    // Rotate C up
    if (balance > 1) {
        int iF = m_child1[C];
        int iG = m_child2[C];
        int F = iF;
        int G = iG;
        // assert (G != null);
        assert (0 <= iF && iF < m_nodeCapacity);
        assert (0 <= iG && iG < m_nodeCapacity);
        // Swap A and C
        m_child1[C] = iA;
        int cParent = m_parent[C] = m_parent[A];
        m_parent[A] = iC;
        // A's old parent should point to C
        if (cParent != NULL_NODE) {
            if (m_child1[cParent] == iA) {
                m_child1[cParent] = iC;
            } else {
                assert (m_child2[cParent] == iA);
                m_child2[cParent] = iC;
            }
        } else {
            m_root = iC;
        }
        // Rotate
        if (m_height[F] > m_height[G]) {
            m_child2[C] = iF;
            m_child2[A] = iG;
            m_parent[G] = iA;
            m_aabb[A].combine(m_aabb[B], m_aabb[G]);
            m_aabb[C].combine(m_aabb[A], m_aabb[F]);
            m_height[A] = 1 + MathUtils.max(m_height[B], m_height[G]);
            m_height[C] = 1 + MathUtils.max(m_height[A], m_height[F]);
        } else {
            m_child2[C] = iG;
            m_child2[A] = iF;
            m_parent[F] = iA;
            m_aabb[A].combine(m_aabb[B], m_aabb[F]);
            m_aabb[C].combine(m_aabb[A], m_aabb[G]);
            m_height[A] = 1 + MathUtils.max(m_height[B], m_height[F]);
            m_height[C] = 1 + MathUtils.max(m_height[A], m_height[G]);
        }
        return iC;
    }
    // Rotate B up
    if (balance < -1) {
        int iD = m_child1[B];
        int iE = m_child2[B];
        int D = iD;
        int E = iE;
        assert (0 <= iD && iD < m_nodeCapacity);
        assert (0 <= iE && iE < m_nodeCapacity);
        // Swap A and B
        m_child1[B] = iA;
        int Bparent = m_parent[B] = m_parent[A];
        m_parent[A] = iB;
        // A's old parent should point to B
        if (Bparent != NULL_NODE) {
            if (m_child1[Bparent] == iA) {
                m_child1[Bparent] = iB;
            } else {
                assert (m_child2[Bparent] == iA);
                m_child2[Bparent] = iB;
            }
        } else {
            m_root = iB;
        }
        // Rotate
        if (m_height[D] > m_height[E]) {
            m_child2[B] = iD;
            m_child1[A] = iE;
            m_parent[E] = iA;
            m_aabb[A].combine(m_aabb[C], m_aabb[E]);
            m_aabb[B].combine(m_aabb[A], m_aabb[D]);
            m_height[A] = 1 + MathUtils.max(m_height[C], m_height[E]);
            m_height[B] = 1 + MathUtils.max(m_height[A], m_height[D]);
        } else {
            m_child2[B] = iE;
            m_child1[A] = iD;
            m_parent[D] = iA;
            m_aabb[A].combine(m_aabb[C], m_aabb[D]);
            m_aabb[B].combine(m_aabb[A], m_aabb[E]);
            m_height[A] = 1 + MathUtils.max(m_height[C], m_height[D]);
            m_height[B] = 1 + MathUtils.max(m_height[A], m_height[E]);
        }
        return iB;
    }
    return iA;
}
