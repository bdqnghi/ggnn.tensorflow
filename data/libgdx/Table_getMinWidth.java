public float getMinWidth() {
    if (sizeInvalid)
        computeSize();
    return tableMinWidth;
}
