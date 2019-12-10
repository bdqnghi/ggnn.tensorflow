/**
 * @param recursive false to fetch a root child only, true to search the entire node tree for the specified node.
 * @return The node with the specified id, or null if not found.
 */
public Node getChild(final String id, boolean recursive, boolean ignoreCase) {
    return getNode(children, id, recursive, ignoreCase);
}
