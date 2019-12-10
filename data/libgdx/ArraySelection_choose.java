public void choose(T item) {
    if (item == null)
        throw new IllegalArgumentException("item cannot be null.");
    if (isDisabled)
        return;
    if (selected.size > 0 && rangeSelect && multiple && (Gdx.input.isKeyPressed(Keys.SHIFT_LEFT) || Gdx.input.isKeyPressed(Keys.SHIFT_RIGHT))) {
        int low = array.indexOf(getLastSelected(), false);
        int high = array.indexOf(item, false);
        if (low > high) {
            int temp = low;
            low = high;
            high = temp;
        }
        snapshot();
        if (!UIUtils.ctrl())
            selected.clear();
        for (; low <= high; low++) selected.add(array.get(low));
        if (fireChangeEvent())
            revert();
        cleanup();
        return;
    }
    super.choose(item);
}
