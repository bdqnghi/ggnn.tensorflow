public void removeAll(Array<T> items) {
    boolean removed = false;
    snapshot();
    for (int i = 0, n = items.size; i < n; i++) {
        T item = items.get(i);
        if (item == null)
            throw new IllegalArgumentException("item cannot be null.");
        if (selected.remove(item))
            removed = true;
    }
    if (removed && programmaticChangeEvents && fireChangeEvent())
        revert();
    else
        lastSelected = null;
    cleanup();
}
