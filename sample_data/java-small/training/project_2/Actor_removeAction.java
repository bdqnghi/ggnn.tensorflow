public void removeAction(Action action) {
    if (actions.removeValue(action, true))
        action.setActor(null);
}
