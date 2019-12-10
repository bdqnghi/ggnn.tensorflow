/**
 * Sets {@link Align#bottom} and clears {@link Align#top} for the alignment of widgets within the horizontal group.
 */
public HorizontalGroup bottom() {
    align |= Align.bottom;
    align &= ~Align.top;
    return this;
}
