/**
 * Adds {@link Align#right} and clears {@link Align#left} for the alignment of the logical table within the table actor.
 */
public Table right() {
    align |= Align.right;
    align &= ~Align.left;
    return this;
}
