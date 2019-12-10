public void clearItems() {
    if (items.size == 0)
        return;
    items.clear();
    selection.clear();
    invalidateHierarchy();
}
