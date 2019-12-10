void selectNodes(Array<Node> nodes, float low, float high) {
    for (int i = 0, n = nodes.size; i < n; i++) {
        Node node = nodes.get(i);
        if (node.actor.getY() < low)
            break;
        if (!node.isSelectable())
            continue;
        if (node.actor.getY() <= high)
            selection.add(node);
        if (node.expanded)
            selectNodes(node.children, low, high);
    }
}
