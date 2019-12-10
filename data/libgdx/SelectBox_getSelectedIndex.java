/**
 * @return The index of the first selected item. The top item has an index of 0. Nothing selected has an index of -1.
 */
public int getSelectedIndex() {
    ObjectSet<T> selected = selection.items();
    return selected.size == 0 ? -1 : items.indexOf(selected.first(), false);
}
