/**
 * @return The first checked button index, or -1.
 */
public int getCheckedIndex() {
    if (checkedButtons.size > 0)
        return buttons.indexOf(checkedButtons.get(0), true);
    return -1;
}
