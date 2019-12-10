/**
 * Sets the z-index of this actor. The z-index is the index into the parent's {@link Group#getChildren() children}, where a
 * lower index is below a higher index. Setting a z-index higher than the number of children will move the child to the front.
 * Setting a z-index less than zero is invalid.
 */
public void setZIndex(int index) {
    if (index < 0)
        throw new IllegalArgumentException("ZIndex cannot be < 0.");
    Group parent = this.parent;
    if (parent == null)
        return;
    Array<Actor> children = parent.children;
    if (children.size == 1)
        return;
    index = Math.min(index, children.size - 1);
    if (index == children.indexOf(this, true))
        return;
    if (!children.removeValue(this, true))
        return;
    children.insert(index, this);
}
