public float getPrefHeight() {
    float v = prefHeight.get(actor);
    if (background != null)
        v = Math.max(v, background.getMinHeight());
    return Math.max(getMinHeight(), v + padTop.get(this) + padBottom.get(this));
}
