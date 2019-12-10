public boolean act(float delta) {
    if (capture)
        target.addCaptureListener(listener);
    else
        target.addListener(listener);
    return true;
}
