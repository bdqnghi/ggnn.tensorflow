/**
 * Removes all actors from this group.
 */
public void clearChildren() {
    Actor[] actors = children.begin();
    for (int i = 0, n = children.size; i < n; i++) {
        Actor child = actors[i];
        child.setStage(null);
        child.setParent(null);
    }
    children.end();
    children.clear();
    childrenChanged();
}
