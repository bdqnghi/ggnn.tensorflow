public void exit(InputEvent event, float x, float y, int pointer, Actor toActor) {
    if (toActor != null && toActor.isDescendantOf(event.getListenerActor()))
        return;
    hide();
}
