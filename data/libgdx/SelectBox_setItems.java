/**
 * Sets the items visible in the select box.
 */
public void setItems(Array<T> newItems) {
    if (newItems == null)
        throw new IllegalArgumentException("newItems cannot be null.");
    float oldPrefWidth = getPrefWidth();
    items.clear();
    items.addAll(newItems);
    selection.validate();
    selectBoxList.list.setItems(items);
    invalidate();
    if (oldPrefWidth != getPrefWidth())
        invalidateHierarchy();
}
