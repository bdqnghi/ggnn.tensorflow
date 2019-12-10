/**
 * Insert the specified nodes as children of this node at the specified index. If the node is already a child of another node,
 * then it is removed from its current parent. If the specified index is less than zero or equal or greater than
 * {@link #getChildCount()} then the Node is added as the currently last child.
 * @param index The zero-based index at which to add the child
 * @param nodes The nodes to add as child of this Node
 * @return the zero-based index of the first inserted child
 */
public <T extends Node> int insertChildren(int index, final Iterable<T> nodes) {
    if (index < 0 || index > children.size)
        index = children.size;
    int i = index;
    for (T child : nodes) insertChild(i++, child);
    return index;
}
