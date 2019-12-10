protected boolean delegate(float delta) {
    if (time < duration) {
        time += delta;
        if (time < duration)
            return false;
        delta = time - duration;
    }
    if (action == null)
        return true;
    return action.act(delta);
}
