public void invalidateHierarchy() {
    if (!layoutEnabled)
        return;
    invalidate();
    Group parent = getParent();
    if (parent instanceof Layout)
        ((Layout) parent).invalidateHierarchy();
}
