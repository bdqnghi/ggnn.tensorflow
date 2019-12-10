private int getAvailablePointer() {
    for (int i = 0; i < MAX_TOUCHES; i++) {
        if (!touchMap.containsValue(i, false))
            return i;
    }
    return -1;
}
