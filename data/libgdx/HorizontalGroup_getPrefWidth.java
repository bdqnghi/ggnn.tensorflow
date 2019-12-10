public float getPrefWidth() {
    if (sizeInvalid)
        computeSize();
    return prefWidth;
}
