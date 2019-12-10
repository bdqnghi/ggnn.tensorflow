@Override
public void disableBlending() {
    if (blendingDisabled)
        return;
    flush();
    blendingDisabled = true;
}
