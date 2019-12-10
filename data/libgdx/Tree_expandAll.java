/**
 * Expands all nodes under and including this node.
 */
public void expandAll() {
    setExpanded(true);
    if (children.size > 0)
        Tree.expandAll(children);
}
