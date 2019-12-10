public boolean mouseMoved(InputEvent event, float x, float y) {
    list.setSelectedIndex(Math.min(selectBox.items.size - 1, (int) ((list.getHeight() - y) / list.getItemHeight())));
    return true;
}
