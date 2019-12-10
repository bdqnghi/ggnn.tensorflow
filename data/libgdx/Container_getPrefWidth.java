public float getPrefWidth() {
    float v = prefWidth.get(actor);
    if (background != null)
        v = Math.max(v, background.getMinWidth());
    return Math.max(getMinWidth(), v + padLeft.get(this) + padRight.get(this));
}
