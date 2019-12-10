private void copyNodes(Array<Node> nodes, final Array<String> nodeIds) {
    for (int i = 0, n = nodes.size; i < n; ++i) {
        final Node node = nodes.get(i);
        for (final String nodeId : nodeIds) {
            if (nodeId.equals(node.id)) {
                this.nodes.add(node.copy());
                break;
            }
        }
    }
    invalidate();
}
