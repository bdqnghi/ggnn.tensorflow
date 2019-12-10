private float getNodeAt(Array<Node> nodes, float y, float rowY) {
    for (int i = 0, n = nodes.size; i < n; i++) {
        Node node = nodes.get(i);
        if (y >= rowY - node.height - ySpacing && y < rowY) {
            foundNode = node;
            return -1;
        }
        rowY -= node.height + ySpacing;
        if (node.expanded) {
            rowY = getNodeAt(node.children, y, rowY);
            if (rowY == -1)
                return -1;
        }
    }
    return rowY;
}
