public boolean act(float delta) {
    if (!removed) {
        removed = true;
        target.remove();
    }
    return true;
}
