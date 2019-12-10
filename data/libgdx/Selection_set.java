/**
 * Sets the selection to only the specified item.
 */
public void set(T item) {
    if (item == null)
        throw new IllegalArgumentException("item cannot be null.");
    if (selected.size == 1 && selected.first() == item)
        return;
    snapshot();
    selected.clear();
    selected.add(item);
    if (programmaticChangeEvents && fireChangeEvent())
        revert();
    else
        lastSelected = item;
    cleanup();
}
