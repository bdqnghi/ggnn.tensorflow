public float getPrefWidth() {
    float width = super.getPrefWidth();
    if (style.up != null)
        width = Math.max(width, style.up.getMinWidth());
    if (style.down != null)
        width = Math.max(width, style.down.getMinWidth());
    if (style.checked != null)
        width = Math.max(width, style.checked.getMinWidth());
    return width;
}
