public static final int StateUpdateChar(int index) {
    if (index < 4)
        return 0;
    if (index < 10)
        return index - 3;
    return index - 6;
}
