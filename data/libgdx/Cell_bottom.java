/**
 * Adds {@link Align#bottom} and clears {@link Align#top} for the alignment of the actor within the cell.
 */
public Cell<T> bottom() {
    if (align == null)
        align = bottomi;
    else
        align = (align | Align.bottom) & ~Align.top;
    return this;
}
