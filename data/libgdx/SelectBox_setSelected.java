/**
 * Sets the selection to only the passed item, if it is a possible choice, else selects the first item.
 */
public void setSelected(T item) {
    if (items.contains(item, false))
        selection.set(item);
    else if (items.size > 0)
        selection.set(items.first());
    else
        selection.clear();
}
