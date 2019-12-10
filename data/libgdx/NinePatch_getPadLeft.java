/**
 * Returns the left padding if set, else returns {@link #getLeftWidth()}.
 */
public float getPadLeft() {
    if (padLeft == -1)
        return getLeftWidth();
    return padLeft;
}
