protected boolean delegate(float delta) {
    Array<Action> currentActions = target.getActions();
    if (currentActions.size == 1)
        waitForActions.clear();
    for (int i = waitForActions.size - 1; i >= 0; i--) {
        Action action = waitForActions.get(i);
        int index = currentActions.indexOf(action, true);
        if (index == -1)
            waitForActions.removeIndex(i);
    }
    if (waitForActions.size > 0)
        return false;
    return action.act(delta);
}
