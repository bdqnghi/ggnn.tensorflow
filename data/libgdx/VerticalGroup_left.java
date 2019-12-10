/**
 * Sets {@link Align#left} and clears {@link Align#right} for the alignment of widgets within the vertical group.
 */
public VerticalGroup left() {
    align |= Align.left;
    align &= ~Align.right;
    return this;
}
