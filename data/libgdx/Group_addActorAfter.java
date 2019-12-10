/**
 * Adds an actor as a child of this group, immediately after another child actor. The actor is first removed from its parent
 * group, if any.
 */
public void addActorAfter(Actor actorAfter, Actor actor) {
    if (actor.parent != null)
        actor.parent.removeActor(actor, false);
    int index = children.indexOf(actorAfter, true);
    if (index == children.size)
        children.add(actor);
    else
        children.insert(index + 1, actor);
    actor.setParent(this);
    actor.setStage(getStage());
    childrenChanged();
}
