/**
 * Sets {@link Align#right} and clears {@link Align#left} for the alignment of widgets within the vertical group.
 */
public VerticalGroup right() {
    align |= Align.right;
    align &= ~Align.left;
    return this;
}
