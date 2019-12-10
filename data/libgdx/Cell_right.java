/**
 * Adds {@link Align#right} and clears {@link Align#left} for the alignment of the actor within the cell.
 */
public Cell<T> right() {
    if (align == null)
        align = righti;
    else
        align = (align | Align.right) & ~Align.left;
    return this;
}
