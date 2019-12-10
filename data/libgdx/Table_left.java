/**
 * Adds {@link Align#left} and clears {@link Align#right} for the alignment of the logical table within the table actor.
 */
public Table left() {
    align |= Align.left;
    align &= ~Align.right;
    return this;
}
