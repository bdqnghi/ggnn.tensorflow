@Override
public final void query(TreeCallback callback, AABB aabb) {
    assert (aabb.isValid());
    nodeStackIndex = 0;
    nodeStack[nodeStackIndex++] = m_root;
    while (nodeStackIndex > 0) {
        DynamicTreeNode node = nodeStack[--nodeStackIndex];
        if (node == null) {
            continue;
        }
        if (AABB.testOverlap(node.aabb, aabb)) {
            if (node.child1 == null) {
                boolean proceed = callback.treeCallback(node.id);
                if (!proceed) {
                    return;
                }
            } else {
                if (nodeStack.length - nodeStackIndex - 2 <= 0) {
                    DynamicTreeNode[] newBuffer = new DynamicTreeNode[nodeStack.length * 2];
                    System.arraycopy(nodeStack, 0, newBuffer, 0, nodeStack.length);
                    nodeStack = newBuffer;
                }
                nodeStack[nodeStackIndex++] = node.child1;
                nodeStack[nodeStackIndex++] = node.child2;
            }
        }
    }
}
