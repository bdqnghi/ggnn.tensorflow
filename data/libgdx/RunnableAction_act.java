public boolean act(float delta) {
    if (!ran) {
        ran = true;
        run();
    }
    return true;
}
