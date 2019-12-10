public void hide() {
    if (!list.isTouchable() || !hasParent())
        return;
    list.setTouchable(Touchable.disabled);
    Stage stage = getStage();
    if (stage != null) {
        stage.removeCaptureListener(hideListener);
        if (previousScrollFocus != null && previousScrollFocus.getStage() == null)
            previousScrollFocus = null;
        Actor actor = stage.getScrollFocus();
        if (actor == null || isAscendantOf(actor))
            stage.setScrollFocus(previousScrollFocus);
    }
    clearActions();
    selectBox.onHide(this);
}
