/**
 * Called when a button is checked or unchecked. If overridden, generally changing button checked states should not be done
 * from within this method.
 * @return True if the new state should be allowed.
 */
protected boolean canCheck(T button, boolean newState) {
    if (button.isChecked == newState)
        return false;
    if (!newState) {
        // Keep button checked to enforce minCheckCount.
        if (checkedButtons.size <= minCheckCount)
            return false;
        checkedButtons.removeValue(button, true);
    } else {
        // Keep button unchecked to enforce maxCheckCount.
        if (maxCheckCount != -1 && checkedButtons.size >= maxCheckCount) {
            if (uncheckLast) {
                int old = minCheckCount;
                minCheckCount = 0;
                lastChecked.setChecked(false);
                minCheckCount = old;
            } else
                return false;
        }
        checkedButtons.add(button);
        lastChecked = button;
    }
    return true;
}
