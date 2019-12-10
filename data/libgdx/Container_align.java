/**
 * Sets the alignment of the actor within the container. Set to {@link Align#center}, {@link Align#top}, {@link Align#bottom},
 * {@link Align#left}, {@link Align#right}, or any combination of those.
 */
public Container<T> align(int align) {
    this.align = align;
    return this;
}
