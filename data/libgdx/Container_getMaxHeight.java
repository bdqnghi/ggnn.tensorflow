public float getMaxHeight() {
    float v = maxHeight.get(actor);
    if (v > 0)
        v += padTop.get(this) + padBottom.get(this);
    return v;
}
