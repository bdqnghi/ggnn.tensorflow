public float getPrefWidth() {
    if (sizeInvalid)
        computeSize();
    float width = tablePrefWidth;
    if (background != null)
        return Math.max(width, background.getMinWidth());
    return width;
}
