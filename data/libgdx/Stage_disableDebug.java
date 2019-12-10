/**
 * Disables debug on all actors recursively except the specified actor and any children.
 */
private void disableDebug(Actor actor, Actor except) {
    if (actor == except)
        return;
    actor.setDebug(false);
    if (actor instanceof Group) {
        SnapshotArray<Actor> children = ((Group) actor).children;
        for (int i = 0, n = children.size; i < n; i++) disableDebug(children.get(i), except);
    }
}
