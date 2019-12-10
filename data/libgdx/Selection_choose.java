/**
 * Selects or deselects the specified item based on how the selection is configured, whether ctrl is currently pressed, etc.
 * This is typically invoked by user interaction.
 */
public void choose(T item) {
    if (item == null)
        throw new IllegalArgumentException("item cannot be null.");
    if (isDisabled)
        return;
    snapshot();
    try {
        if ((toggle || (!required && selected.size == 1) || UIUtils.ctrl()) && selected.contains(item)) {
            if (required && selected.size == 1)
                return;
            selected.remove(item);
            lastSelected = null;
        } else {
            boolean modified = false;
            if (!multiple || (!toggle && !UIUtils.ctrl())) {
                if (selected.size == 1 && selected.contains(item))
                    return;
                modified = selected.size > 0;
                selected.clear();
            }
            if (!selected.add(item) && !modified)
                return;
            lastSelected = item;
        }
        if (fireChangeEvent())
            revert();
    } finally {
        cleanup();
    }
}
