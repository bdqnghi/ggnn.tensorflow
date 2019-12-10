public void clear() {
    if (selected.size == 0)
        return;
    snapshot();
    selected.clear();
    if (programmaticChangeEvents && fireChangeEvent())
        revert();
    else
        lastSelected = null;
    cleanup();
}
