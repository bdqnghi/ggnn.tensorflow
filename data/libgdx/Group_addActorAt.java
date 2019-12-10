/**
 * Adds an actor as a child of this group, at a specific index. The actor is first removed from its parent group, if any.
 * @param index May be greater than the number of children.
 */
public void addActorAt(int index, Actor actor) {
    if (actor.parent != null)
        actor.parent.removeActor(actor, false);
    if (index >= children.size)
        children.add(actor);
    else
        children.insert(index, actor);
    actor.setParent(this);
    actor.setStage(getStage());
    childrenChanged();
}
