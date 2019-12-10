public void setExpanded(boolean expanded) {
    if (expanded == this.expanded)
        return;
    this.expanded = expanded;
    if (children.size == 0)
        return;
    Tree tree = getTree();
    if (tree == null)
        return;
    if (expanded) {
        for (int i = 0, n = children.size; i < n; i++) children.get(i).addToTree(tree);
    } else {
        for (int i = 0, n = children.size; i < n; i++) children.get(i).removeFromTree(tree);
    }
    tree.invalidateHierarchy();
}
