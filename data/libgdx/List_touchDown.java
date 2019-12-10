void touchDown(float y) {
    if (items.size == 0)
        return;
    float height = getHeight();
    if (style.background != null) {
        height -= style.background.getTopHeight() + style.background.getBottomHeight();
        y -= style.background.getBottomHeight();
    }
    int index = (int) ((height - y) / itemHeight);
    index = Math.max(0, index);
    index = Math.min(items.size - 1, index);
    selection.choose(items.get(index));
}
