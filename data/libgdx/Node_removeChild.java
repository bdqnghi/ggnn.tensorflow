/**
 * Removes the specified node as child of this node. On success, the child node will be not attached to any parent node (its
 * {@link #getParent()} method will return null). If the specified node currently isn't a child of this node then the removal
 * is considered to be unsuccessful and the method will return false.
 * @param child The child node to remove.
 * @return Whether the removal was successful.
 */
public <T extends Node> boolean removeChild(final T child) {
    if (!children.removeValue(child, true))
        return false;
    child.parent = null;
    return true;
}
