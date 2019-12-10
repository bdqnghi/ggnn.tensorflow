public void show(Stage stage) {
    if (list.isTouchable())
        return;
    stage.removeCaptureListener(hideListener);
    stage.addCaptureListener(hideListener);
    stage.addActor(this);
    selectBox.localToStageCoordinates(screenPosition.set(0, 0));
    // Show the list above or below the select box, limited to a number of items and the available height in the stage.
    float itemHeight = list.getItemHeight();
    float height = itemHeight * (maxListCount <= 0 ? selectBox.items.size : Math.min(maxListCount, selectBox.items.size));
    Drawable scrollPaneBackground = getStyle().background;
    if (scrollPaneBackground != null)
        height += scrollPaneBackground.getTopHeight() + scrollPaneBackground.getBottomHeight();
    Drawable listBackground = list.getStyle().background;
    if (listBackground != null)
        height += listBackground.getTopHeight() + listBackground.getBottomHeight();
    float heightBelow = screenPosition.y;
    float heightAbove = stage.getCamera().viewportHeight - screenPosition.y - selectBox.getHeight();
    boolean below = true;
    if (height > heightBelow) {
        if (heightAbove > heightBelow) {
            below = false;
            height = Math.min(height, heightAbove);
        } else
            height = heightBelow;
    }
    if (below)
        setY(screenPosition.y - height);
    else
        setY(screenPosition.y + selectBox.getHeight());
    setX(screenPosition.x);
    setHeight(height);
    validate();
    float width = Math.max(getPrefWidth(), selectBox.getWidth());
    if (getPrefHeight() > height)
        width += getScrollBarWidth();
    if (scrollPaneBackground != null) {
        // Assume left and right padding are the same, so right padding can include a shadow.
        width += Math.max(0, scrollPaneBackground.getRightWidth() - scrollPaneBackground.getLeftWidth());
    }
    setWidth(width);
    validate();
    scrollTo(0, list.getHeight() - selectBox.getSelectedIndex() * itemHeight - itemHeight / 2, 0, 0, true, true);
    updateVisualScroll();
    previousScrollFocus = null;
    Actor actor = stage.getScrollFocus();
    if (actor != null && !actor.isDescendantOf(this))
        previousScrollFocus = actor;
    stage.setScrollFocus(this);
    list.selection.set(selectBox.getSelected());
    list.setTouchable(Touchable.enabled);
    clearActions();
    selectBox.onShow(this, below);
}
