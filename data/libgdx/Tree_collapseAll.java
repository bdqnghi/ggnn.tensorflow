/**
 * Collapses all nodes under and including this node.
 */
public void collapseAll() {
    setExpanded(false);
    Tree.collapseAll(children);
}
