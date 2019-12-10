/**
 * Called to add the actor to the tree when the node's parent is expanded.
 */
protected void addToTree(Tree tree) {
    tree.addActor(actor);
    if (!expanded)
        return;
    for (int i = 0, n = children.size; i < n; i++) children.get(i).addToTree(tree);
}
