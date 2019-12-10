/**
 * Called by the framework when an actor is added to or removed from a group.
 * @param parent May be null if the actor has been removed from the parent.
 */
protected void setParent(Group parent) {
    this.parent = parent;
}
