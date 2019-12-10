public void addAll(Array<T> items) {
    boolean added = false;
    snapshot();
    for (int i = 0, n = items.size; i < n; i++) {
        T item = items.get(i);
        if (item == null)
            throw new IllegalArgumentException("item cannot be null.");
        if (selected.add(item))
            added = true;
    }
    if (added && programmaticChangeEvents && fireChangeEvent())
        revert();
    else
        lastSelected = items.peek();
    cleanup();
}
