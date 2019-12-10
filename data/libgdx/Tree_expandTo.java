/**
 * Expands all parent nodes of this node.
 */
public void expandTo() {
    Node node = parent;
    while (node != null) {
        node.setExpanded(true);
        node = node.parent;
    }
}
