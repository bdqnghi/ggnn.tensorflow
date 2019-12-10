public boolean act(float delta) {
    if (complete)
        return true;
    complete = true;
    Pool pool = getPool();
    // Ensure this action can't be returned to the pool while executing.
    setPool(null);
    try {
        Array<Action> actions = this.actions;
        for (int i = 0, n = actions.size; i < n && actor != null; i++) {
            Action currentAction = actions.get(i);
            if (currentAction.getActor() != null && !currentAction.act(delta))
                complete = false;
            // This action was removed.
            if (actor == null)
                return true;
        }
        return complete;
    } finally {
        setPool(pool);
    }
}
