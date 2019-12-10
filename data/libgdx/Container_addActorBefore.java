/**
 * @deprecated Container may have only a single child.
 * @see #setActor(Actor)
 */
public void addActorBefore(Actor actorBefore, Actor actor) {
    throw new UnsupportedOperationException("Use Container#setActor.");
}
