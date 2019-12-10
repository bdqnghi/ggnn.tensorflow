/**
 * Sets {@link Align#bottom} and clears {@link Align#top} for the alignment of the actor within the container.
 */
public Container<T> bottom() {
    align |= Align.bottom;
    align &= ~Align.top;
    return this;
}
