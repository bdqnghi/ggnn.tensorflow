protected boolean delegate(float delta) {
    if (executedCount == repeatCount)
        return true;
    if (action.act(delta)) {
        if (finished)
            return true;
        if (repeatCount > 0)
            executedCount++;
        if (executedCount == repeatCount)
            return true;
        if (action != null)
            action.restart();
    }
    return false;
}
