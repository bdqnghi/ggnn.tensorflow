public void exit(InputEvent event, float x, float y, int pointer, Actor toActor) {
    if (toActor == null || !isAscendantOf(toActor))
        list.selection.set(selectBox.getSelected());
}
