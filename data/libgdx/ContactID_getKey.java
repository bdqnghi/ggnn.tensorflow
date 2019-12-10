public int getKey() {
    return ((int) indexA) << 24 | ((int) indexB) << 16 | ((int) typeA) << 8 | ((int) typeB);
}
