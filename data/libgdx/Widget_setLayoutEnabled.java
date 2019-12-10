public void setLayoutEnabled(boolean enabled) {
    layoutEnabled = enabled;
    if (enabled)
        invalidateHierarchy();
}
