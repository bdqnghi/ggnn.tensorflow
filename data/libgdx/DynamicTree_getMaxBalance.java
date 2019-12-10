@Override
public int getMaxBalance() {
    int maxBalance = 0;
    for (int i = 0; i < m_nodeCapacity; ++i) {
        final DynamicTreeNode node = m_nodes[i];
        if (node.height <= 1) {
            continue;
        }
        assert (node.child1 == null == false);
        DynamicTreeNode child1 = node.child1;
        DynamicTreeNode child2 = node.child2;
        int balance = MathUtils.abs(child2.height - child1.height);
        maxBalance = MathUtils.max(maxBalance, balance);
    }
    return maxBalance;
}
