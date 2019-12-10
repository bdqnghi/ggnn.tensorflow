/**
 * Sets the items visible in the list, clearing the selection if it is no longer valid. If a selection is
 * {@link ArraySelection#getRequired()}, the first item is selected.
 */
public void setItems(Array newItems) {
    if (newItems == null)
        throw new IllegalArgumentException("newItems cannot be null.");
    float oldPrefWidth = getPrefWidth(), oldPrefHeight = getPrefHeight();
    items.clear();
    items.addAll(newItems);
    selection.validate();
    invalidate();
    if (oldPrefWidth != getPrefWidth() || oldPrefHeight != getPrefHeight())
        invalidateHierarchy();
}
