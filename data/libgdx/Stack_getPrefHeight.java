public float getPrefHeight() {
    if (sizeInvalid)
        computeSize();
    return prefHeight;
}
