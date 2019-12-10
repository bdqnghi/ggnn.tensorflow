public void enter(InputEvent event, float x, float y, int pointer, Actor fromActor) {
    if (pointer != -1)
        return;
    if (Gdx.input.isTouched())
        return;
    Actor actor = event.getListenerActor();
    if (fromActor != null && fromActor.isDescendantOf(actor))
        return;
    setContainerPosition(actor, x, y);
    manager.enter(this);
}
