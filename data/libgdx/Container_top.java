/**
 * Sets {@link Align#top} and clears {@link Align#bottom} for the alignment of the actor within the container.
 */
public Container<T> top() {
    align |= Align.top;
    align &= ~Align.bottom;
    return this;
}
