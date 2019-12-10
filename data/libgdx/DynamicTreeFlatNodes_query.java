@Override
public final void query(TreeCallback callback, AABB aabb) {
    nodeStackIndex = 0;
    nodeStack[nodeStackIndex++] = m_root;
    while (nodeStackIndex > 0) {
        int node = nodeStack[--nodeStackIndex];
        if (node == NULL_NODE) {
            continue;
        }
        if (AABB.testOverlap(m_aabb[node], aabb)) {
            int child1 = m_child1[node];
            if (child1 == NULL_NODE) {
                boolean proceed = callback.treeCallback(node);
                if (!proceed) {
                    return;
                }
            } else {
                if (nodeStack.length - nodeStackIndex - 2 <= 0) {
                    nodeStack = BufferUtils.reallocateBuffer(nodeStack, nodeStack.length, nodeStack.length * 2);
                }
                nodeStack[nodeStackIndex++] = child1;
                nodeStack[nodeStackIndex++] = m_child2[node];
            }
        }
    }
}
