@Override
public void dispose() {
    // Don't rely on the GC
    if (motionState != null)
        motionState.dispose();
    if (body != null)
        body.dispose();
    // And remove the reference
    motionState = null;
    body = null;
}
