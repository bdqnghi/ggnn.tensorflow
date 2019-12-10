public void clicked(InputEvent event, float x, float y) {
    int count = getTapCount() % 4;
    if (count == 0)
        clearSelection();
    if (count == 2) {
        int[] array = wordUnderCursor(x);
        setSelection(array[0], array[1]);
    }
    if (count == 3)
        selectAll();
}
