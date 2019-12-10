/**
 * @param id The ID of the node to fetch.
 * @param recursive false to fetch a root node only, true to search the entire node tree for the specified node.
 * @param ignoreCase whether to use case sensitivity when comparing the node id.
 * @return The {@link Node} with the specified id, or null if not found.
 */
public Node getNode(final String id, boolean recursive, boolean ignoreCase) {
    return Node.getNode(nodes, id, recursive, ignoreCase);
}
