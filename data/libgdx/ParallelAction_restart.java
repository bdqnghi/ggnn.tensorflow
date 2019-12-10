public void restart() {
    complete = false;
    Array<Action> actions = this.actions;
    for (int i = 0, n = actions.size; i < n; i++) actions.get(i).restart();
}
