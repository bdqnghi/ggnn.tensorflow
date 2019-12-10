/**
 * Sets {@link Align#left} and clears {@link Align#right} for the alignment of the actor within the container.
 */
public Container<T> left() {
    align |= Align.left;
    align &= ~Align.right;
    return this;
}
