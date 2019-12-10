public void setActor(Actor actor) {
    Array<Action> actions = this.actions;
    for (int i = 0, n = actions.size; i < n; i++) actions.get(i).setActor(actor);
    super.setActor(actor);
}
