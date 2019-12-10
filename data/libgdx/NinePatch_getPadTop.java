/**
 * Returns the top padding if set, else returns {@link #getTopHeight()}.
 */
public float getPadTop() {
    if (padTop == -1)
        return getTopHeight();
    return padTop;
}
