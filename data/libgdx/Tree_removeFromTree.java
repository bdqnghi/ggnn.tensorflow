/**
 * Called to remove the actor from the tree when the node's parent is collapsed.
 */
protected void removeFromTree(Tree tree) {
    tree.removeActor(actor);
    if (!expanded)
        return;
    for (int i = 0, n = children.size; i < n; i++) children.get(i).removeFromTree(tree);
}
