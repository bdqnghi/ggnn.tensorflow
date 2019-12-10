/**
 * Returns the right padding if set, else returns {@link #getRightWidth()}.
 */
public float getPadRight() {
    if (padRight == -1)
        return getRightWidth();
    return padRight;
}
