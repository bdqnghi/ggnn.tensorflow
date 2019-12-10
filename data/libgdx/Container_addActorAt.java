/**
 * @deprecated Container may have only a single child.
 * @see #setActor(Actor)
 */
public void addActorAt(int index, Actor actor) {
    throw new UnsupportedOperationException("Use Container#setActor.");
}
