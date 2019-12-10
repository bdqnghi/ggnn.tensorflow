/**
 * Adds {@link Align#top} and clears {@link Align#bottom} for the alignment of the logical table within the table actor.
 */
public Table top() {
    align |= Align.top;
    align &= ~Align.bottom;
    return this;
}
