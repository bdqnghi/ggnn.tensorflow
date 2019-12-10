/**
 * Adds the specified nodes as the currently last child of this node. If the node is already a child of another node, then it
 * is removed from its current parent.
 * @param nodes The Node to add as child of this Node
 * @return the zero-based index of the first added child
 */
public <T extends Node> int addChildren(final Iterable<T> nodes) {
    return insertChildren(-1, nodes);
}
