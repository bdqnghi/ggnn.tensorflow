public float getPrefHeight() {
    float height = super.getPrefHeight();
    if (style.up != null)
        height = Math.max(height, style.up.getMinHeight());
    if (style.down != null)
        height = Math.max(height, style.down.getMinHeight());
    if (style.checked != null)
        height = Math.max(height, style.checked.getMinHeight());
    return height;
}
