public void invalidateHierarchy() {
    invalidate();
    Group parent = getParent();
    if (parent instanceof Layout)
        ((Layout) parent).invalidateHierarchy();
}
