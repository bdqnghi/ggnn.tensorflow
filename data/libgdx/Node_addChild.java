/**
 * Adds the specified node as the currently last child of this node. If the node is already a child of another node, then it is
 * removed from its current parent.
 * @param child The Node to add as child of this Node
 * @return the zero-based index of the child
 */
public <T extends Node> int addChild(final T child) {
    return insertChild(-1, child);
}
