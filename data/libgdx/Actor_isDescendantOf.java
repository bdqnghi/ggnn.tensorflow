/**
 * Returns true if this actor is the same as or is the descendant of the specified actor.
 */
public boolean isDescendantOf(Actor actor) {
    if (actor == null)
        throw new IllegalArgumentException("actor cannot be null.");
    Actor parent = this;
    while (true) {
        if (parent == null)
            return false;
        if (parent == actor)
            return true;
        parent = parent.parent;
    }
}
