private float layout(Array<Node> nodes, float indent, float y) {
    float ySpacing = this.ySpacing;
    for (int i = 0, n = nodes.size; i < n; i++) {
        Node node = nodes.get(i);
        Actor actor = node.actor;
        float x = indent;
        if (node.icon != null)
            x += node.icon.getMinWidth();
        y -= node.height;
        node.actor.setPosition(x, y);
        y -= ySpacing;
        if (node.expanded)
            y = layout(node.children, indent + indentSpacing, y);
    }
    return y;
}
