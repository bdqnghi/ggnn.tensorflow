protected boolean delegate(float delta) {
    if (action == null)
        return true;
    return action.act(delta * scale);
}
