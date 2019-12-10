/**
 * Returns the tree this node is currently in, or null.
 */
public Tree getTree() {
    Group parent = actor.getParent();
    if (!(parent instanceof Tree))
        return null;
    return (Tree) parent;
}
