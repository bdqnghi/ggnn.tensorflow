void cut(boolean fireChangeEvent) {
    if (hasSelection && !passwordMode) {
        copy();
        cursor = delete(fireChangeEvent);
        updateDisplayText();
    }
}
