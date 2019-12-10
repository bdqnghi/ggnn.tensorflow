/**
 * Adds an actor as a child of this group, immediately before another child actor. The actor is first removed from its parent
 * group, if any.
 */
public void addActorBefore(Actor actorBefore, Actor actor) {
    if (actor.parent != null)
        actor.parent.removeActor(actor, false);
    int index = children.indexOf(actorBefore, true);
    children.insert(index, actor);
    actor.setParent(this);
    actor.setStage(getStage());
    childrenChanged();
}
