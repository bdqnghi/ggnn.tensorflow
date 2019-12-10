/**
 * Removes all tree nodes.
 */
public void clearChildren() {
    super.clearChildren();
    setOverNode(null);
    rootNodes.clear();
    selection.clear();
}
