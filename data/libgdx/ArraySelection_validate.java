/**
 * Removes objects from the selection that are no longer in the items array. If {@link #getRequired()} is true and there is no
 * selected item, the first item is selected.
 */
public void validate() {
    Array<T> array = this.array;
    if (array.size == 0) {
        clear();
        return;
    }
    for (Iterator<T> iter = items().iterator(); iter.hasNext(); ) {
        T selected = iter.next();
        if (!array.contains(selected, false))
            iter.remove();
    }
    if (required && selected.size == 0)
        set(array.first());
}
