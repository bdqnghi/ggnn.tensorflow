public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
    Actor target = event.getTarget();
    if (isAscendantOf(target))
        return false;
    list.selection.set(selectBox.getSelected());
    hide();
    return false;
}
