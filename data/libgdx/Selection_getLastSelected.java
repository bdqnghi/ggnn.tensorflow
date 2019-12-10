/**
 * Makes a best effort to return the last item selected, else returns an arbitrary item or null if the selection is empty.
 */
public T getLastSelected() {
    if (lastSelected != null) {
        return lastSelected;
    } else if (selected.size > 0) {
        return selected.first();
    }
    return null;
}
