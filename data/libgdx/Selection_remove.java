public void remove(T item) {
    if (item == null)
        throw new IllegalArgumentException("item cannot be null.");
    if (!selected.remove(item))
        return;
    if (programmaticChangeEvents && fireChangeEvent())
        selected.add(item);
    else
        lastSelected = null;
}
