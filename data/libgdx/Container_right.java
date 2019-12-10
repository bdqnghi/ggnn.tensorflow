/**
 * Sets {@link Align#right} and clears {@link Align#left} for the alignment of the actor within the container.
 */
public Container<T> right() {
    align |= Align.right;
    align &= ~Align.left;
    return this;
}
