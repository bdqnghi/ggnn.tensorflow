/**
 * Removes this actor from its parent, if it has a parent.
 * @see Group#removeActor(Actor)
 */
public boolean remove() {
    if (parent != null)
        return parent.removeActor(this, true);
    return false;
}
