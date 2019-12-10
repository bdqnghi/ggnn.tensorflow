/**
 * Adds {@link Align#bottom} and clears {@link Align#top} for the alignment of the logical table within the table actor.
 */
public Table bottom() {
    align |= Align.bottom;
    align &= ~Align.top;
    return this;
}
