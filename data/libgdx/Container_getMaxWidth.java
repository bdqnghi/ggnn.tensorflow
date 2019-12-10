public float getMaxWidth() {
    float v = maxWidth.get(actor);
    if (v > 0)
        v += padLeft.get(this) + padRight.get(this);
    return v;
}
