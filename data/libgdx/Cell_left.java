/**
 * Adds {@link Align#left} and clears {@link Align#right} for the alignment of the actor within the cell.
 */
public Cell<T> left() {
    if (align == null)
        align = lefti;
    else
        align = (align | Align.left) & ~Align.right;
    return this;
}
