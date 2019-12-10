public void addAction(Action action) {
    actions.add(action);
    if (actor != null)
        action.setActor(actor);
}
