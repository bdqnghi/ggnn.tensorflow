public void addAction(Action action) {
    action.setActor(this);
    actions.add(action);
    if (stage != null && stage.getActionsRequestRendering())
        Gdx.graphics.requestRendering();
}
