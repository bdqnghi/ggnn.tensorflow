@Override
public int getMaxBalance() {
    int maxBalance = 0;
    for (int i = 0; i < m_nodeCapacity; ++i) {
        if (m_height[i] <= 1) {
            continue;
        }
        assert (m_child1[i] != NULL_NODE);
        int child1 = m_child1[i];
        int child2 = m_child2[i];
        int balance = MathUtils.abs(m_height[child2] - m_height[child1]);
        maxBalance = MathUtils.max(maxBalance, balance);
    }
    return maxBalance;
}
