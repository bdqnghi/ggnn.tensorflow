/**
 * Reset state so the cell can be reused, setting all constraints to their {@link #defaults() default} values.
 */
public void reset() {
    actor = null;
    table = null;
    endRow = false;
    cellAboveIndex = -1;
    Cell defaults = defaults();
    if (defaults != null)
        set(defaults);
}
