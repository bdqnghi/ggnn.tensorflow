/**
 * Helper method to recursive fetch a node from an array
 * @param recursive false to fetch a root node only, true to search the entire node tree for the specified node.
 * @return The node with the specified id, or null if not found.
 */
public static Node getNode(final Array<Node> nodes, final String id, boolean recursive, boolean ignoreCase) {
    final int n = nodes.size;
    Node node;
    if (ignoreCase) {
        for (int i = 0; i < n; i++) if ((node = nodes.get(i)).id.equalsIgnoreCase(id))
            return node;
    } else {
        for (int i = 0; i < n; i++) if ((node = nodes.get(i)).id.equals(id))
            return node;
    }
    if (recursive) {
        for (int i = 0; i < n; i++) if ((node = getNode(nodes.get(i).children, id, true, ignoreCase)) != null)
            return node;
    }
    return null;
}
