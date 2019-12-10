public float getMaxWidth() {
    if (sizeInvalid)
        computeSize();
    return maxWidth;
}
