public float getMinHeight() {
    if (sizeInvalid)
        computeSize();
    return minHeight;
}
