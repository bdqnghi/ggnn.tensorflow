/**
 * Adds {@link Align#top} and clears {@link Align#bottom} for the alignment of the actor within the cell.
 */
public Cell<T> top() {
    if (align == null)
        align = topi;
    else
        align = (align | Align.top) & ~Align.bottom;
    return this;
}
