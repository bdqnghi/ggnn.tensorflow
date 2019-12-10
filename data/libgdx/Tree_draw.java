/**
 * Draws selection, icons, and expand icons.
 */
private void draw(Batch batch, Array<Node> nodes, float indent) {
    Drawable plus = style.plus, minus = style.minus;
    float x = getX(), y = getY();
    for (int i = 0, n = nodes.size; i < n; i++) {
        Node node = nodes.get(i);
        Actor actor = node.actor;
        if (selection.contains(node) && style.selection != null) {
            style.selection.draw(batch, x, y + actor.getY() - ySpacing / 2, getWidth(), node.height + ySpacing);
        } else if (node == overNode && style.over != null) {
            style.over.draw(batch, x, y + actor.getY() - ySpacing / 2, getWidth(), node.height + ySpacing);
        }
        if (node.icon != null) {
            float iconY = actor.getY() + Math.round((node.height - node.icon.getMinHeight()) / 2);
            batch.setColor(actor.getColor());
            node.icon.draw(batch, x + node.actor.getX() - iconSpacingRight - node.icon.getMinWidth(), y + iconY, node.icon.getMinWidth(), node.icon.getMinHeight());
            batch.setColor(Color.WHITE);
        }
        if (node.children.size == 0)
            continue;
        Drawable expandIcon = node.expanded ? minus : plus;
        float iconY = actor.getY() + Math.round((node.height - expandIcon.getMinHeight()) / 2);
        expandIcon.draw(batch, x + indent - iconSpacingLeft, y + iconY, expandIcon.getMinWidth(), expandIcon.getMinHeight());
        if (node.expanded)
            draw(batch, node.children, indent + indentSpacing);
    }
}
