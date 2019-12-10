/**
 * Sets the alignment of the actor within the cell. Set to {@link Align#center}, {@link Align#top}, {@link Align#bottom},
 * {@link Align#left}, {@link Align#right}, or any combination of those.
 */
public Cell<T> align(int align) {
    this.align = align;
    return this;
}
