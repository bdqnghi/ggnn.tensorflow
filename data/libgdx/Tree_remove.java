public void remove(Node node) {
    children.removeValue(node, true);
    if (!expanded)
        return;
    Tree tree = getTree();
    if (tree == null)
        return;
    node.removeFromTree(tree);
    if (children.size == 0)
        expanded = false;
}
