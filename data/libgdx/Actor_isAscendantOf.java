/**
 * Returns true if this actor is the same as or is the ascendant of the specified actor.
 */
public boolean isAscendantOf(Actor actor) {
    if (actor == null)
        throw new IllegalArgumentException("actor cannot be null.");
    while (true) {
        if (actor == null)
            return false;
        if (actor == this)
            return true;
        actor = actor.parent;
    }
}
