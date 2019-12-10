public float getPrefHeight() {
    if (sizeInvalid)
        computeSize();
    float height = tablePrefHeight;
    if (background != null)
        return Math.max(height, background.getMinHeight());
    return height;
}
