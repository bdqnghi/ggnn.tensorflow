public void pack() {
    setSize(getPrefWidth(), getPrefHeight());
    validate();
    // calls invalidateHierarchy() in layout() if its pref height has changed.
    if (needsLayout) {
        setSize(getPrefWidth(), getPrefHeight());
        validate();
    }
}
