/**
 * Insert the specified node as child of this node at the specified index. If the node is already a child of another node, then
 * it is removed from its current parent. If the specified index is less than zero or equal or greater than
 * {@link #getChildCount()} then the Node is added as the currently last child.
 * @param index The zero-based index at which to add the child
 * @param child The Node to add as child of this Node
 * @return the zero-based index of the child
 */
public <T extends Node> int insertChild(int index, final T child) {
    for (Node p = this; p != null; p = p.getParent()) {
        if (p == child)
            throw new GdxRuntimeException("Cannot add a parent as a child");
    }
    Node p = child.getParent();
    if (p != null && !p.removeChild(child))
        throw new GdxRuntimeException("Could not remove child from its current parent");
    if (index < 0 || index >= children.size) {
        index = children.size;
        children.add(child);
    } else
        children.insert(index, child);
    child.parent = this;
    return index;
}
