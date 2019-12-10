/**
 * Adds the item to the selection.
 */
public void add(T item) {
    if (item == null)
        throw new IllegalArgumentException("item cannot be null.");
    if (!selected.add(item))
        return;
    if (programmaticChangeEvents && fireChangeEvent())
        selected.remove(item);
    else
        lastSelected = item;
}
