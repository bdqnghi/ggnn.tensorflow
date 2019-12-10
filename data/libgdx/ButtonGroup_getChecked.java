/**
 * @return The first checked button, or null.
 */
public T getChecked() {
    if (checkedButtons.size > 0)
        return checkedButtons.get(0);
    return null;
}
