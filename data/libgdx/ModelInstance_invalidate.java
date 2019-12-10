/**
 * Makes sure that each {@link NodePart} of each {@link Node} doesn't reference a node outside this node tree and that all
 * materials are listed in the {@link #materials} array.
 */
private void invalidate() {
    for (int i = 0, n = nodes.size; i < n; ++i) {
        invalidate(nodes.get(i));
    }
}
