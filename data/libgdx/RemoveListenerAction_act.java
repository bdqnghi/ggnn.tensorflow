public boolean act(float delta) {
    if (capture)
        target.removeCaptureListener(listener);
    else
        target.removeListener(listener);
    return true;
}
