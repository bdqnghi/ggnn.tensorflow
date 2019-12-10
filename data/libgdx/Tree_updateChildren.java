public void updateChildren() {
    if (!expanded)
        return;
    Tree tree = getTree();
    if (tree == null)
        return;
    for (int i = 0, n = children.size; i < n; i++) children.get(i).addToTree(tree);
}
