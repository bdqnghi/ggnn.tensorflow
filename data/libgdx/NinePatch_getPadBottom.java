/**
 * Returns the bottom padding if set, else returns {@link #getBottomHeight()}.
 */
public float getPadBottom() {
    if (padBottom == -1)
        return getBottomHeight();
    return padBottom;
}
