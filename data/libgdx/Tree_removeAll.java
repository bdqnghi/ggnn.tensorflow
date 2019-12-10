public void removeAll() {
    Tree tree = getTree();
    if (tree != null) {
        for (int i = 0, n = children.size; i < n; i++) children.get(i).removeFromTree(tree);
    }
    children.clear();
}
