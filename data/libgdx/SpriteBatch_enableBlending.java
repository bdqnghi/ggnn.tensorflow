@Override
public void enableBlending() {
    if (!blendingDisabled)
        return;
    flush();
    blendingDisabled = false;
}
