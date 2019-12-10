/**
 * Adds an actor as a child of this group. The actor is first removed from its parent group, if any.
 */
public void addActor(Actor actor) {
    if (actor.parent != null)
        actor.parent.removeActor(actor, false);
    children.add(actor);
    actor.setParent(this);
    actor.setStage(getStage());
    childrenChanged();
}
