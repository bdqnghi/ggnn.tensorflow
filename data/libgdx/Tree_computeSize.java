private void computeSize(Array<Node> nodes, float indent) {
    float ySpacing = this.ySpacing;
    float spacing = iconSpacingLeft + iconSpacingRight;
    for (int i = 0, n = nodes.size; i < n; i++) {
        Node node = nodes.get(i);
        float rowWidth = indent + iconSpacingRight;
        Actor actor = node.actor;
        if (actor instanceof Layout) {
            Layout layout = (Layout) actor;
            rowWidth += layout.getPrefWidth();
            node.height = layout.getPrefHeight();
            layout.pack();
        } else {
            rowWidth += actor.getWidth();
            node.height = actor.getHeight();
        }
        if (node.icon != null) {
            rowWidth += spacing + node.icon.getMinWidth();
            node.height = Math.max(node.height, node.icon.getMinHeight());
        }
        prefWidth = Math.max(prefWidth, rowWidth);
        prefHeight -= node.height + ySpacing;
        if (node.expanded)
            computeSize(node.children, indent + indentSpacing);
    }
}
