/**
 * Returns the z-index of this actor.
 * @see #setZIndex(int)
 */
public int getZIndex() {
    Group parent = this.parent;
    if (parent == null)
        return -1;
    return parent.children.indexOf(this, true);
}
