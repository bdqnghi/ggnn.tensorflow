public float getMaxHeight() {
    if (sizeInvalid)
        computeSize();
    return maxHeight;
}
