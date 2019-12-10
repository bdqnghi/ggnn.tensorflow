/**
 * Sets {@link Align#top} and clears {@link Align#bottom} for the alignment of widgets within the horizontal group.
 */
public HorizontalGroup top() {
    align |= Align.top;
    align &= ~Align.bottom;
    return this;
}
